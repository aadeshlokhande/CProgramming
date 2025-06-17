// Function

// inbuilt
// scanf, printf

// user define
// main()


// syntax
// returntype functionName(arguments)
// {
//     code;
//     return value;
// }


// #include<stdio.h>
// void greet(int roll)
// {
//     printf("Hello Roll Number %d...\n",roll);
// }


// int main()
// {
//     greet(10);
//     greet(20);
//     greet(30);
//     greet(40);

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// #include<stdio.h>
// void add(int a,int b)
// {
//     int ans = a + b;
//     printf("%d + %d = %d\n", a,b,ans);
// }


// int main()
// {
//     add(10,20);
//     add(30,40);
//     return 0;
// }


// with argument with return 
// #include<stdio.h>
// int add(int a, int b)
// {
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int ans;
//     ans = add(10,2900) ;
//     printf("ans = %d",ans);
//     return 0;
// }

// with argument without return 
// #include<stdio.h>
// void add(int a, int b)
// {
//     int c = a + b;
//     printf("ans = %d\n",c);
// }
// int main()
// {
//     add(10,2900) ;
//     return 0;
// }

// without argument with return 
// #include<stdio.h>
// int add()
// {
//     int a = 12;
//     int b = 13;
//     int c = a + b;
//     return c;
// }
// int main()
// {
//     int ans;
//     ans = add() ;
//     printf("ans = %d",ans);
//     return 0;
// }



// without argument without return 
// #include<stdio.h>
// void add()
// {
//     int a = 12, b = 90;
//     int c = a + b;
//     printf("ans = %d\n",c);
// }
// int main()
// {
//     add();
//     add();
//     add();
//     add();
//     add();
//     return 0;
// }

// #################################################
// #################### HOMEWORK ###################
// #################################################


// sub 
// multi 
// div 
// mod
// square 
// cube

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// Recursion
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// void greet(int a)
// {   
//     if(a>=1)
//     {
//         printf("Hello ");
//         greet(a-1);
//     }
// }

// int main()
// {
//     greet(5);
//     return 0;
// }


// factorial

// 5! = 5x4x3x2x1
// 4! = 4x3x2x1

// 5! = 5x4! 
// n! = n x (n-1)!


// 1! = 1 
// 0! = 1 

// #include<stdio.h>
// int fact(int a)
// {
//     if(a==1 || a==0)
//     {
//         return 1;
//     }
//     else 
//     {
//         return a * fact(a-1);
//     }
// }

// int main()
// {
//     int num,ans;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     ans = fact(num);
//     printf("ans = %d",ans);
//     return 0;
// }

