//
//  main.c
//  linked_list
//
//  Created by Duan Huikai on 30/03/2024.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct ListEl {
    int data;
    struct ListEl *next;
} ListEl;

ListEl *list_build(void) {
    int values[] = { 8, 14, 13, 17, 1, 19, 16, 5, 3, 11, 2,
                     15, 9, 10, 6, 22, 4, 7, 18, 27, -15 };
    ListEl *lis = NULL;

    int i;
    for (i = 0; values[i] > -14; ++i) {
        ListEl *u;
        u = (ListEl*) malloc(sizeof(ListEl));
        u->next = lis;
        u->data = values[i];
        lis = u;
    }
    return lis;
}
int list_length(ListEl *head) {
    int length = 0;
    ListEl *current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

void list_delete(ListEl *head) {
    ListEl *current = head;
    while (current != NULL) {
        ListEl *temp = current;
        current = current->next;
        free(temp);
    }
}

ListEl *list_insert_at_head(ListEl *head, int value) {
    ListEl *new = (ListEl*)malloc(sizeof(ListEl));
    new->data = value;
    new->next = head;
    return new;
}

ListEl *list_insert_at_end(ListEl *head, int value) {
    ListEl *new = (ListEl*)malloc(sizeof(ListEl));
    new->data = value;
    new->next = NULL;

    if (head == NULL) {
        return new;
    }
    return head;
}


ListEl *list_search(ListEl *head, int value) {
    ListEl *current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

int main(int argc, const char * argv[]) {
    ListEl *head = NULL;
    
    head = list_insert_at_head(head, 25);
    head = list_insert_at_head(head, 15);
    head = list_insert_at_head(head, 10);
    head = list_insert_at_head(head, 5);

    printf("Length of the list: %d\n", list_length(head));
    
    ListEl *search_result = list_search(head, 15);
    if (search_result != NULL)
        printf("Element found: %d\n", search_result->data);
    else
        printf("Element not found\n");
    
    list_delete(head);

    return 0;
}
