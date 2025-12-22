// **************** Recursion ****************

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

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// #include<stdio.h>
// void greet(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello \n");
//         greet(a-1);
//     }
// }

// // task --> 5000

// int main()
// {
//     greet(5);
//     printf("sunday\n");
//     printf("monday\n");
//     printf("tuesday\n");
//     greet(7);

//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// factorial
// 5! = 5x4x3x2x1 = 120
// 4! = 4x3x2x1
// 5! = 5 x 4! 
// 10! = 10 x 9!
// n! = n x (n-1)! ---> formula 1 

// 1! = 1 
// 0! = 1

// #include<stdio.h>
// int fact(int a)
// {
//     if(a==0 || a==1)
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
//     int num, ans;
//     printf("Enter a number = ");
//     scanf("%d",&num); // 5
//     ans = fact(num); // 120
//     printf("factorial of %d is %d ",num, ans);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #################################################
// #################### HOMEWORK ###################
// #################################################

// fibbonacci series
// 0,1,1,2,3,5,8,13,21......

// do all for loop's homework using recursion










