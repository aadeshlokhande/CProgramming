// while loop 

// while(condition)
// {
//     statement;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=10)
//     {
//         printf("Hello ");
//         ++a;
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a=1, num;
//     printf("enter a number = ");
//     scanf("%d",&num);
//     while(a<=10)
//     {
//         printf("%d\n",a*num);
//         ++a;
//     }
// }


// --------------------------------------------------------


// #include<stdio.h>
// int main()
// {
//     int a,b,con = 1;
//     while(con==1)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         printf("%d + %d = %d\n",a,b,a+b);
//         printf("do you want to continue = ");
//         scanf("%d",&con);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,ans = 1;
//     while(ans!=0)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         ans = a + b;
//         printf("%d + %d = %d\n",a,b,ans);
       
//     }
// }

// $$$$$$$$$$$$$$$$$$$$$$$ Homework $$$$$$$$$$$$$$$$$$$$$$$

// 1) get values from user till he enter 0... and when he enter 0... print total sum of all number 

// enter a number = 12
// enter a number = 43
// enter a number = 36
// enter a number = 23
// enter a number = 45
// enter a number = 12
// enter a number = 7
// enter a number = 0

// total sum = 2343

// #include<stdio.h>
// int main()
// {
//     int num = 1, sum = 0;
//     while(num!=0)
//     {
//         printf("enter a value = ");
//         scanf("%d",&num);
//         sum = sum + num;
//     }
//     printf("Sum = %d",sum);
// }


// 2) get negative number forcefully 
// enter a negative number = 34
// enter a negative number = 43
// enter a negative number = 7
// enter a negative number = 5
// enter a negative number = 34
// enter a negative number = -43
// thanks for entrig negative number

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a>0)
//     {
//         printf("enter a negative number = ");
//         scanf("%d",&a);
//     }

//     printf("thanks for entering negative number");
// }
