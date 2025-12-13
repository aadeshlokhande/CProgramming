// **************** While Loop ****************

// syntax

// while (condition)
// {
//     code;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=10)
//     {
//         printf("Hello... ");
//         ++a;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c,con = 1;
//     while(con==1)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         c = a + b;
//         printf("ans = %d\n",c);
//         printf("do you want to continue(1/0) = ");
//         scanf("%d",&con);
//     }
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int num = 3;
//     while(num>=0)
//     {
//         printf("Enter a -ve number = ");
//         scanf("%d",&num);   
//     }
//     printf("Thanks for entring -ve number");
//     return 0;
// }


// enter a -ve number = 4
// enter a -ve number = 6
// enter a -ve number = 0
// enter a -ve number = 4334
// enter a -ve number = -7
// thank for entering -ve number


// #include<stdio.h>
// int main()
// {
//     int flag = 0, num;
//     while(flag==0)
//     {
//         printf("Enter a -ve number = ");
//         scanf("%d",&num);
//         if(num<=0)
//         {
//             flag=1;
//         }
//     }
//     printf("thank for entering -ve number");
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// enter a number = 3
// enter a number = 2
// enter a number = 5
// enter a number = 4
// enter a number = 1
// enter a number = 3
// enter a number = 6
// enter a number = 0
// total sum = 24

// #include <stdio.h>
// int main()
// {
//     int con = 0, num1, num2 = 0;
//     while( con == 0)
//     {
//         printf("Enter a number =");
//         scanf("%d", &num1);
//         num2 = num2 + num1;
//         if (num1 == 0)
//         {
//             con = 1;
//         }
//     }
//     printf("The sum is %d ", num2);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int totalSum = 0, num = 23;
//     while (num!= 0)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&num);
//         totalSum =totalSum + num;
//     }
//     printf("totalSum = %d",totalSum);
//     return 0;
// }


