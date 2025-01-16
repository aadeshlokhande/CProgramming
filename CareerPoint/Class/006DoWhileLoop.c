// Do-while loop

// while(condition)
// {
//     statements;
// }

// do 
// {
//     statements;
// }
// while(condition);

#include<stdio.h>
int main()
{
    int con,a,b;
    do
    {
        printf("Enter a number = ");
        scanf("%d",&a);
        printf("Enter a number = ");
        scanf("%d",&b);
        printf("%d + %d = %d\n",a,b,a+b);

        printf("do you want to continue = ");
        scanf("%d",&con);
    }while(con==1);
}
