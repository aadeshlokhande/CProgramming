// Recursion

// #include<stdio.h>

// void hello(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello buddy \n");
//         a--;
//         hello(a);
//     }
// }

// int main()
// {
//     hello(5);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// 5! = 5x4x3x2x1
// 4! = 4x3x2x1

// 5! = 5x4!

// n! = n x (n-1)!

// 1! = 1 
// 0! = 1 

// #include<stdio.h>

// int factorial(int a)
// {
//     if(a==1 || a==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         return a * factorial(a-1);
//     }
// }
// // 5 x 4 x 3 x 2 x 1 = 120
// int main()
// {
//     int num, ans;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     ans = factorial(num);

//     printf("factorial of %d is %d",num, ans);
//     return 0;
// }

// #################################################
// #################### HOMEWORK ###################
// #################################################


// factorial
// fibbonaci