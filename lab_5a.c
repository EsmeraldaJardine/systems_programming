/*
The topics for this lab sessions are:
 • memoryallocation
 Task 5.A
 ▶On Moodle, you are provided with a file that partially implements a basic linked list structure. It also includes
 a driver, i.e. main method that could be used to test that your code works.
 ▶You are asked to write implementation for the 2 following functions:
 1. create_nodeattempts to allocate a new node using malloc. If it fails, it returns NULL. Otherwise, it sets
 the members (value and next) to the appropriate values.
 2. free_list frees the whole list starting from the node
*/

#include <stdlib.h>
#include <stdio.h>

struct node {
    char value;
    struct node * next;
};

struct node* create_node(char value) {
  // TODO: allocate memory space and initialise struct members
}

void free_list(struct node* list) {
  // TODO: free all allocated memory space starting from the head of the list
}

void print_list(struct node* list) {
    while (list) {
      printf("%c-", list->value);
      list = list->next;
    }
    printf("\n");
}

int main (void) {
    char course[] = "Systems Programming";
    struct node* last_node = NULL;
    struct node* head = NULL;
    for (int i=0; course[i]!='\0'; i++) {
        struct node* new_node = create_node(course[i]);
        if(!new_node) {
            printf("Could not create new node\nExiting...\n");
            return -1;
        }
        if (last_node) {
            last_node->next = new_node;
        } else {
            head = new_node;
        }
        last_node = new_node;
    }
    print_list(head);
    free_list(head);
    head=NULL;
    print_list(head);
}