#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE* head = NULL;
//created a node type pointer named head which will store the base address of the linked list.This is global.
NODE* create_node();
//This function creates every single nodes each time run and returns a NODE type pointer
void create_linked_list(int );
//This function links all the nodes.
void traverse();
//Traverses all the nodes.
int main()
{
    int n;
    printf("Enter the number of nodes you want to create:\n");
    scanf("%d",&n);
    create_linked_list(n);
    printf("\n");
    traverse();
    return 0;
}
NODE* create_node()
{
    NODE* ptr = (NODE*)malloc(sizeof(NODE));
    //dynamic allocation of NODE type data type.
    printf("Enter the data:\n");
    scanf("%d",&ptr->data);
    ptr->next = NULL;
}
void create_linked_list(int n)
{
    NODE* ptr = create_node();
    head = ptr;
    NODE* q = head;
    for (int i = 1;i<n; i++)
    {
        ptr = create_node();
        q->next = ptr;
        q = q->next;
    }
}
void traverse()
{
    NODE*q;
    q = head;
    while (q!=NULL)
    {
        printf("%d ",q->data);
        q = q->next;
    }
}
