// Recursion

// #include<stdio.h>
// void abc()
// {
//     printf("Hello ");
//     abc();
// }

// int main()
// {
//     abc();
//     return 0;
// }


// #include<stdio.h>
// void abc(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello ");
//         --a;
//         abc(a);
//     }
// }

// int main()
// {
//     abc(5);
//     return 0;
// }

// ============================



// 5! = 5x4x3x2x1
// 4! = 4x3x2x1

// 5! = 5x4!

// n! = nx(n-1)!
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
//     int a,ans;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     ans = fact(a);
//     printf("factorial of %d is %d",a,ans);
// }