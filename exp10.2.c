#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *temp, *newnode;
    int n, value, pos, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter value: ");
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;

    temp = head;
    for (i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    printf("Updated Linked List: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}