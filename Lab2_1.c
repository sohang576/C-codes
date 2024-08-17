//wap to read two numbers and compare them using function call by adress;
//Wap to create an array of n elements using dynamic memeory allocation .Calculate sum of all the prime elements of that array using function and reallocte the memeory of the array after its use
//WAP to create a structure to store the information of n number of employees info include,emp id, name, desgnation,basic salary, hra(15%),da(25%),then display the employee gross salary and info
#include<Stdio.h>
void compare(int*,int*);
int main()
{
    int n,m;
    printf("Enter the number:\n");
    scanf("%d%d",&n,&m);
    compare(&n,&m);
    return 0;
}
void compare(int*n,int*m)
{
    if (*n > *m)
        printf("%d is bigger than %d",*n,*m);
    else
        printf("%d is bigger than %d",*m,*n);
}
