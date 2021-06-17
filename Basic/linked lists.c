#include <stdio.h>
#include <stdlib.h>

void display(struct Node* n)
{
    while (n!=NULL){
        printf(" %d",n->data);
        n = n->next;
    }
}
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    second->data=20;
    third->data=30;

    head->next=second;
    second->next=third;
    thord->next= NULL;

    display(head);

    return 0;
}
