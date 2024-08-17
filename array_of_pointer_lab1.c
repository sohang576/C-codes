#include<stdio.h>
int main()
{
    int arr1[3] = {1,2,3};
    int arr2[4] = {0,9,7,8};
    int *arr_f[2];
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    arr_f[0] = ptr1;
    arr_f[1] = ptr2;
    printf("\n%d",arr_f[0][2]);
    return 0;
}
