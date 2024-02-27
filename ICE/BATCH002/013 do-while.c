// do-while loop 

// #include<stdio.h>
// int main()
// {
//     int a=1;
//     do 
//     {
//         printf("Happy xmas\n");
//         ++a;
//     } while(a<=10);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a,b, con;
    do 
    {
        printf("Enter a number = ");
        scanf("%d",&a);
        printf("Enter a number = ");
        scanf("%d",&b);
        printf("%d + %d = %d", a,b,a+b);

        printf("Do you want to continue = ");
        scanf("%d",&con);
    } while(con==1);
    return 0;
}

// ##################################################
// #################### HOMEWORK ####################
// ##################################################

// get 2 values from user and print addition till answer is 0 

// get values from user till user enter 0... when he enter 0 then print total sum of all given values
// enter a number = 1
// enter a number = 3
// enter a number = 2
// enter a number = 5
// enter a number = 0
// ans = 11 

// get values from user till user enter 0... when he enter 0 then print count of odd values of all given values
// ans = 3 
