// Recursion

// #include<stdio.h>
// void greet()
// {
//     printf("Hello ");
//     greet();
// }

// int main()
// {
//     greet();
//     return 0;
// }


// #include<stdio.h>
// void greet(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello \n");
//         --a;
//         greet(a);
//     }
// }

// int main()
// {
//     greet(5);    
//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int num = 1;

// void table(int a)
// {
//     if(num<=10)
//     {
//         printf("%d\n",num*a);
//         ++num;
//         table(a);
//     }
// }

// int main()
// {
//     table(6);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// factorial

// 5! = 5x4x3x2x1 = 120
// 4! = 4x3x2x1

// 5! = 5 x 4!
// n! = n x (n-1)! ----> formula

// 1! = 1 
// 0! = 1

// #include<stdio.h>

// int factorial(int a)
// {
//     if(a==0 || a == 1)
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
//     int a, ans;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     ans = factorial(a);
//     printf("factorial of %d is %d",a,ans);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int a, b = 100000;
//     a = printf("Hello %d",b);
//     printf("\na = %d",a);
//     return 0;
// }
