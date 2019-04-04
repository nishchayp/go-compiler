#define SZ 100

int is_func = 0;
int arr[5];

typedef struct TableEntry {
    char name[SZ];
    char* type;
    int size;
    int num_arg;
    char* return_type;
    char scope;
    int args[5];
} TableEntry;

typedef struct ListNode {
    TableEntry entry;
    struct ListNode* next;
} ListNode;

ListNode* sym_tbl[SZ];
void nullify_sym_tbl() {
    for (int i = 0; i < SZ; i++) {
        sym_tbl[i] = NULL;
    }
}
 
int hash(char name[]) {
    int k = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        k += name[i];
    }
    return (k % SZ);
}
 
ListNode* search(char name[]) {
    int idx = hash(name);
    for (ListNode* node = sym_tbl[idx]; node != NULL; node = node->next) {
        if (strcmp(name, node->entry.name) == 0) {
            return node;
        }
    }
    return NULL;
}

void insert(char name[], char* type, int size, int num_arg, char* return_type, char scope, int args[]) {
	if (search(name) != NULL) {
		return;
	}
	if ((strcmp(name, " ") == 0) || (strcmp(name, "\t") == 0) || (strcmp(name, "\n") == 0)) {
		return;
	}
    int idx = hash(name);
    ListNode* new_node = (ListNode*)malloc(sizeof(ListNode));
    int i;
    for (i = 0; name[i] != '\0'; i++) {
        new_node->entry.name[i] = name[i];
    }
    new_node->entry.name[i] = name[i];
    new_node->entry.type = type;
    new_node->entry.size = size;
    new_node->entry.num_arg = num_arg;
    new_node->entry.return_type = return_type;
    for (int k = 0; k < num_arg; k++)
    	new_node->entry.args[k] = args[k];
    new_node->entry.scope = scope;
    new_node->next = NULL;
   
    if (sym_tbl[idx] == NULL) {
        sym_tbl[idx] = new_node;
        return;
    }
    ListNode* node = NULL;
    for (node = sym_tbl[idx]; node->next != NULL; node = node->next);
    node->next = new_node;
}
 
void print_sym_tbl() {
    FILE* st = fopen("symbol_table.output", "w");
    st = fopen("symbol_table.output", "w");
	fprintf(st, "|%-3s|%-15s|%-18s|%-3s|%-3s|%-5s|%-3s|%s\n", "IDX", "NAME", "TYPE", "SZ", "#ARG", "RET.", "SCP", "ARGS");
    for (int i = 0; i < SZ; i++) {
        if (sym_tbl[i] != NULL) {
            for (ListNode* node = sym_tbl[i]; node != NULL; node = node->next) {
                fprintf(st, "|%-3d|%-15s|%-18s|%-3d|%-4d|%-5s|%-3c|", i, node->entry.name, node->entry.type, node->entry.size, node->entry.num_arg, node->entry.return_type, node->entry.scope);
                for (int k = 0; k < node->entry.num_arg; k++) {
                    fprintf(st, "{id, %d} ", node->entry.args[k]);
                }
                if (node->entry.num_arg == 0)
                    fprintf(st, "{} ");
            fprintf(st, "\n");
            }
        }
    }
}
 
int get_size(char* type) {
    int size = -1;
    if (strcmp(type, "int") == 0)
        size = 4;
    else if (strcmp(type, "char") == 0)
        size = 1;
    return size;
}