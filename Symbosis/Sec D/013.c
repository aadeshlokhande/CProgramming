// nested for loop


// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)    
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 1 = * 
// 2 = * * 
// 3 = * * * 
// 4 = * * * *
// 5 = * * * * *

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 1 = 1
// 2 = 2 1 
// 3 = 3 2 1
// 4 = 4 3 2 1 
// 5 = 5 4 3 2 1

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = i; j>=1; j--)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// 1 = ----*
// 2 = ---* *
// 3 = --* * *
// 4 = -* * * *
// 5 = * * * * * 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = i ; j<=4; j++)
//         {
//             printf(" ");
//         }
//         for(int k = 1; k<=i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 


// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     for(int i = 1; i<=4; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             ++a;
//             printf("%d ",a*a);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// 1 to 10 tables

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=10; i++)
//     {
//         for(int j = 1; j<=10; j++)
//         {
//             printf("%d\t",i*j);
//         }
//         printf("\n");
//     }
//     return 0;
// }




// 5 = 5 
// 4 = 4 5 
// 3 = 3 4 5 
// 2 = 2 3 4 5 
// 1 = 1 2 3 4 5 

// #include<stdio.h>
// int main()
// {
//     for(int i = 5; i>=1; i--)
//     {
//         for(int j = i; j<=5; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// 1 to 100 counting

// 1 2 3 .... 10 
// 11 12 13.... 20 
// 21 22 23......30 
// .
// .
// .
// 91 92 93..... 100


