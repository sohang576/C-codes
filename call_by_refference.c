#include<stdio.h>
void swap(int* ,int*);
int main()
{
    int a,b;
    printf("Enter the 1st and 2nd number respectively:\t");
    scanf("%d%d",&a,&b);
    //function pointer
    void (*swap_ptr)(int*,int*) = swap;
    swap_ptr(&a,&b);
    return 0;
}
void swap(int*a,int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("1st number: %d\n 2nd number: %d",*a,*b);
}
