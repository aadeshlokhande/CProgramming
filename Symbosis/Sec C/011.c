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



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

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
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }




//  1 = ----*
//  2 = ---* *
//  3 = --* * *
//  4 = -* * * * 
//  5 = * * * * * 

#include<stdio.h>
int main()
{
    for(int i = 1; i<=5; i++)
    {
        for(int j = i; j<=4; j++)
        {
            printf(" ");
        }
        for(int k = 1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

