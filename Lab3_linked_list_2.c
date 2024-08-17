#include<stdio.h>
#include<Stdlib.h>

typedef struct node1
{
    int year,profit;
    struct node1* next1;
}profit;

typedef struct node2
{
    char* company;
    struct node1* next2 ;
    struct node2* next3;
}comp;

comp* head = NULL;

//profit* temp = NULL;

comp* create_node_comp();

void create_profitlist();

profit* create_node_profit();

int traverse();

int main()
{
    char c ;
    int n,m,p;
    printf("Enter the number of companies you want to enter:\n");
    scanf("%d",&n);
    printf("Enter the number of data you wanna enter:\n");
    scanf("%d",&m);
    create_profitlist(n,m);
    printf("\n");
    do
    {
        p = traverse();
        if (p!=-1)
            printf("The profit was: %d",p);
        else
            printf("Profit not found!");
        printf("Want to search again?(Y/N):\n");
        scanf("%c",&c);
    }
    while(c=='y');
    return 0;
}

comp* create_node_comp()
{
    comp* ptr = (comp*)malloc(sizeof(comp));
    if (ptr  == NULL)
    {
        printf("No memory allocated!");
        exit(1);
    }
    printf("Enter the name of the company:\n");
    scanf("%s",&ptr->company);
    ptr->next2 = NULL;
    ptr->next3 = NULL;
}

profit* create_node_profit()
{
    profit* ptr = (profit*)malloc(sizeof(profit));
    if (ptr  == NULL)
    {
        printf("No memory allocated!");
        exit(1);
    }
    printf("Enter the year:\n");
    scanf("%d",&ptr->year);
    printf("Enter the profit:\n");
    scanf("%d",&ptr->profit);
    ptr->next1 = NULL;
}

void create_profitlist(int n,int m)
{
    comp* ptr1 = create_node_comp();
    head = ptr1;
    comp* q ;
    q= head;
    profit* ptr2 = create_node_profit();
    q->next2 = ptr2;
    profit* temp = ptr2;
    for(int j = 1; j<m; j++)
    {
        profit* ptr2 = create_node_profit();
        temp->next1 = ptr2;
        temp = temp->next1;
    }
    for (int i = 1; i<n; i++)
    {
        comp* ptr1 = create_node_comp();
        q->next3 = ptr1;
        q = q->next3;
        profit* ptr2 = create_node_profit();
        q->next2 = ptr2;
        profit* temp = ptr2;
        for(int j = 1; j<m; j++)
        {
            profit* ptr2 = create_node_profit();
            temp->next1 = ptr2;
            temp = temp->next1;
        }
    }
    printf("SUCCESSFULL!");
}

int traverse()
{
    comp* q = head;
    char* s;
    int y,p;
    printf("Enter the company:\n");
    scanf("%s",&s);
    printf("Enter the year:\n");
    scanf("%d",&y);
    while(q!=NULL)
    {
        if(q->company == s)
        {
            profit* temp = q->next2;
            while(temp!=NULL)
            {
                if (temp->year==y)
                {
                    p = temp->profit;
                    return p;
                }
                temp = temp->next1;
            }
        }
        q= q->next3;
    }
    return -1;
}
