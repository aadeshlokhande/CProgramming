// nested for loop

// for(init; cond; inc/dec)
// {
//     statements;
//     for(init; cond; inc/dec)
//     {
//         statements
//     }
//     statements
// }

// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=5; a++)
//     {
//         for(int b = 1; b<=5; b++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=5; a++)
//     {
//         for(int b = 1; b<=5; b++)
//         {
//             printf("%d ",b);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=5; a++)
//     {
//         for(int b = 1; b<=a; b++)
//         {
//             printf("%d ",a);
//         }
//         printf("\n");
//     }
// }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5