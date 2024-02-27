// Recursion 

// #include<stdio.h>

// void hello()
// {
//     printf("Hello ");
//     hello();
// }

// int main()
// {
//     hello();
//     return 0;
// }

// ========================

// #include<stdio.h>

// void hello(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello ");
//         hello(a-1);
//     }
// }

// int main()
// {
//     hello(5);
//     return 0;
// }


// =======================


// 5! = 5x4x3x2x1 = 120 
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


// int main()
// {
//     int num,ans;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     ans = factorial(num);
//     printf("factorial of %d is %d",num,ans);
//     return 0;
// }



// ============================================

// #include<stdio.h>
// void table(int a, int b)
// {
//     if(b<=10)
//     {
//         printf("%d x %d = %d\n",a,b,a*b);
//         table(a,b+1);
//     }
// }


// int main()
// {
//     table(5,1);
//     return 0;
// }
