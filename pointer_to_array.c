#include<stdio.h>
int main()
{
    int arr[3] = {1,2,3};
    int (*a)[3];
    a = &arr;
    for (int i = 0; i<3;i++)
    {
        printf("%d",*(*a+i));
    }
    return 0;
}
