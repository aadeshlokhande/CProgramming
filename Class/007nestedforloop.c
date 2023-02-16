// Nested for loop

// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         printf("* ");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j=1; j<=10; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 1 1 1
// 0 0 0 
// 0 0 0 

// 11 12 13 
// 21 22 23
// 31 32 33



#include<stdio.h>
int main()
{
    for(int i =1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            if(i==1)
            {
                printf("1 ");
            }
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

// 1 0 0 
// 1 0 0 
// 1 0 0 

// 1 0 0 
// 0 1 0 
// 0 0 1

// 1 1 1 
// 0 1 1
// 0 0 1 

// 1 0 0 
// 1 1 0 
// 1 1 1

// 1 0 1 
// 0 1 0 
// 1 0 1 

