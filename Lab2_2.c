//Wap to create an array of n elements using dynamic memeory allocation .Calculate sum of all the prime elements of that array using function and reallocte the memeory of the array after its use
#include<stdio.h>
#include<stdlib.h>
int sum(int*,int);
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int *ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    int s = sum(ptr,n);
    printf("%d is the sum of all prime numbers",s);
    free(ptr);
    return 0;
}
int sum (int* ptr,int n)
{
    int s = 0,c=0;
    for (int  i = 0; i<n;i++)
    {
        for(int j =1; j<ptr[i];j++)
        {
            if(ptr[i]%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
            s+=ptr[i];
        }
        c=0;
    }
    return s;
}
