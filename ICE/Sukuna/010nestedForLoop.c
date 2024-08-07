// Nested for loop



// for(init; cond; inc/dec)
// {
    // code
// }





// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5  

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// =========================================

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             printf("%d%d ",i,j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

// 1 0 0 0 0 
// 1 1 0 0 0 
// 1 1 1 0 0
// 1 1 1 1 0
// 1 1 1 1 1 


// 1 1 1 1 1
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i>=j)
//             {
//                 printf("* ");
//             }
//             else 
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


