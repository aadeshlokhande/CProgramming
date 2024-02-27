// Multi-Dimensional Array
// int a[10] = {23,53,12,43,26,32,52,62,23};

#include<stdio.h>
int main()
{
    // int array[3][4] = {{21,24,52,774},{34,54,52,24},{24,54,74,35}};
    // // printf("%d\n",array[2][0]);
    // for(int i = 0; i<3; i++)
    // {
    //     for(int j = 0; j<4; j++)
    //     {
    //         printf("array[%d][%d] = %d\n", i,j,array[i][j]);
    //     }
    // }

    int multiArray[4][2];
    // printf("Enter a number = ");
    // scanf("%d",&multiArray[2][1]);

    // printf("%d\n",multiArray[2][1]);

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enter a number = ");
            scanf("%d",&multiArray[i][j]);
        }
    }

        for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\n",multiArray[i][j]);
           
        }
    }
}

// 12 12 43
// 21 12 53
// 12 53 63

// 00 01 02
// 10 11 12
// 20 21 22

// -----------------------------

// 10 20 30 
// 20 40 50 
// 30 50 60 
