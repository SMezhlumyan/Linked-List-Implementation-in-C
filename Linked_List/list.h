typedef struct Node{
    int val;
    struct Node* next;
} Node ;

void append(Node **,int);//

void Insert(Node*,int);

void free_list(Node**);

void printNode(Node*);

Node* Search(Node*,int);

void Insert_I(Node**,int,int);

Node* Merge(Node*,Node*);

