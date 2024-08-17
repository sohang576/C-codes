#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int *arr[n];
    int *ptr = arr;
    printf("\nEnter the values:\n");
    for (int i = 0; i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i<n;i++)
    {
        printf("%d",*(ptr+i));
    }
}
