// multi dimensional array


// #include<stdio.h>
// int main()
// {
//     int a[4][3] = {{12,23,34},{34,54,42},{43,32,45},{34,23,43}};
//     // printf("%d",a[2][0]); 
//     for(int i = 0; i<4; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("a[%d][%d] = %d\n",i,j, a[i][j]);
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int a2[3][3] = {{10,20,30},{40,50,60},{70,80,90}};
//     int ans[3][3];

//     for(int i = 0; i<3; i++)
//     {
//         for (int j = 0; j<3; j++)
//         {
//             ans[i][j] = a1[i][j] + a2[i][j]; 
//         }
//     }

//     for(int i = 0; i<3; i++)
//     {
//         for (int j = 0; j<3; j++)
//         {
//             printf("%d\t",ans[i][j]); 
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int a[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    // int b[3][3];

    for (int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            // b[j][i] = a[i][j];
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }

    // for (int i = 0; i<3; i++)
    // {
    //     for(int j = 0; j<3; j++)
    //     {
    //         printf("%d\t",b[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}