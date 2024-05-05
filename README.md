---

# Linked List Operations in C

## Overview

This C library provides operations for working with singly linked lists. It includes functions for appending nodes, inserting nodes at specified positions, searching for a value, merging two lists, printing node values, and freeing the memory allocated for the list.

## Data Structure

The core data structure used in this implementation is a singly linked list node, represented by the following structure:

```c
typedef struct Node {
    int val;            // Value stored in the node
    struct Node* next;  // Pointer to the next node in the list
} Node;
```

## Functions

1. **append(Node **head_ref, int val)**
   - Appends a new node with the given value to the end of the linked list.
   
2. **Insert(Node* prev_node, int val)**
   - Inserts a new node with the given value after the specified node in the linked list.
   
3. **free_list(Node** head_ref)**
   - Frees the memory allocated for all nodes in the linked list.
   
4. **printNode(Node* node)**
   - Prints the value of a given node.
   
5. **Search(Node* head, int val)**
   - Searches for a node with the specified value in the linked list.
   
6. **Insert_I(Node** head_ref, int position, int val)**
   - Inserts a new node with the given value at the specified position in the linked list.
   
7. **Merge(Node* list1, Node* list2)**
   - Merges two sorted linked lists into a single sorted linked list.

## Usage

To use these functions, include the necessary header file in your C program and link with the source file.

```c
#include "list.h"

int main() {
    // Your code here
    return 0;
}
```

## License

This library is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---

Feel free to customize this README further if needed!
