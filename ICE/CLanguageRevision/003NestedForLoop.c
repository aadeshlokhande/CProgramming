// Nested for loop

// *
// * *
// * * * 
// * * * *
// * * * * *

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

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1


// #include<stdio.h>
// int main()
// {
//     for(int i = 5; i>=1; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 5; j>=i; j--)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

// 1 
// 2 2
// 3 3 3 
// 4 4 4 4
// 5 5 5 5 5

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for (int j =1; j<=i; j++)
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1

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

// 5 4 3 2 1
// 5 4 3 2 
// 5 4 3 
// 5 4 
// 5 

// i (1-5)
// 5-i 
// j 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j =5; j>=i; j--)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5 4 3 2 1
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 

// #include<stdio.h>
// int main()
// {
//     for(int i = 5; i>=1; i--)
//     {
//         for(int j = i; j>=1; j--)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 1 2 3 4 5
// 2 3 4 5 
// 3 4 5 
// 4 5 
// 5 

// i = (1,5,++)
// j = (i,5,++)
// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = i; j<=5; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5

// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>
int main()
{
    int i,j,sp=4;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=sp; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        sp--;
    }
    return 0;
}








// 5 
// 4 4
// 3 3 3 
// 2 2 2 2
// 1 1 1 1 1

