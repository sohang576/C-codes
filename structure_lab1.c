#include<stdio.h>
struct student
{
    int roll;
    char gender;
    char name[30];
};
int main()
{
    int n;
    char choice;
    printf("Enter the number of student details you want to enter:\t");
    scanf("%d",&n);
    struct student s[n];
    for (int i = 0; i<n;i++)
    {
        printf("\nProvide the name:\n");
        scanf(" %[^\n]s",&s[i].name);
        printf("\nProvide gender:\n");
        scanf(" %c",&s[i].gender);
        printf("\nProvide roll number:\n");
        scanf("%d",&s[i].roll);
    }
    printf("\nDo you want to see the details?\n");
    scanf(" %c",&choice);
    if(choice == 'y')
    {
        for (int i = 0; i<n;i++)
        {
            printf("Name: %s\n",s[i].name);
            printf("Roll number: %d\n",s[i].roll);
            printf("Gender: %c\n",s[i].gender);
        }
    }
    return 0;
}
