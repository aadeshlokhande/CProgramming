// Multi dimentional array

// #include<stdio.h>
// int main()
// {
//     int a[4][5] = {
//         {1,2,3,4,5},
//         {3,4,5,6,4},
//         {2,4,5,6,9},
//         {3,5,4,6,3}};
    // printf("%d", a[1][3]);
    // for(int i=0; i<4 ; i++ )
    // {
    //     for(int j=0; j<5; j++)
    //     {
    //         printf("a[%d][%d] = %d \n",i,j,a[i][j]);
    //     }
    //     // printf("\n");
    // }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][4];
//     for(int i = 0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             printf("Enter a number = ");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i = 0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             printf("%d \n",a[i][j]);
//         }
//     }
//     return 0;
// }


// ===========================================

// 00 01 02
// 10 11 12 
// 20 21 22

// 10 20 30 
// 20 40 50 
// 30 50 60 

// 1 0 0
// 3 4 0
// 2 3 4 

// 1 2 3
// 4 5 6
// 7 8 9 

// 1 4 7 
// 2 5 8 
// 3 6 9 

// add
// symetric
// upper 
// lower
// transpose

// 00 01 02
// 10 11 12 
// 20 21 22 

// 00 01 02
// 10 11 12 
// 20 21 22 

// c[i][j] = a[i][j] + b[i][j]

// ===================================

// symetric

// 00 01 02
// 10 11 12 
// 20 21 22

// 10 20 30 
// 20 40 50 
// 30 50 60 

// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     int mat1[3][3], mat2[3][3];
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("Enter a mat1[%d][%d] = ",i,j);
//             scanf("%d",&mat1[i][j]);
//         }
//     }

//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             mat2[j][i] = mat1[i][j];
//         }
//     }
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("%3d",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             if(mat1[i][j]==mat2[i][j])
//             {
//                 ++a;
//             }
//         }
//     }
//     if(a==9)
//     {
//         printf("symetric matrics");
//     }
//     else 
//     {
//         printf("assymetric matrics");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     int mat1[3][3];
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("Enter a mat1[%d][%d] = ",i,j);
//             scanf("%d",&mat1[i][j]);
//         }
//     }


//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("%3d",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             if(mat1[i][j]==mat1[j][i])
//             {
//                 ++a;
//             }
//         }
//     }
//     if(a==9)
//     {
//         printf("symetric matrics");
//     }
//     else 
//     {
//         printf("assymetric matrics");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int mat1[3][3];
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("Enter a mat1[%d][%d] = ",i,j);
//             scanf("%d",&mat1[i][j]);
//         }
//     }

//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<3; j++)
//         {
//             printf("%3d",mat1[i][j]);
//         }
//         printf("\n");
//     }

//     if(mat1[1][0]==0 && mat1[2][0]==0 && mat1[2][1]==0)
//     {
//         printf("upper");
//     }
//     else 
//     {
//         printf("nhi hai");
//     }
//     return 0;
// }


// a = {10,40,20,30};
// a = {10,20,40,30};


// a = {10, 20,30,40};

// int a = 10;
// int b = 20;

// logic

// = = = = = = = = = = = = = 




// #include<stdio.h>
// int main()
// {
//     int a = 0;

//     for(int i = 1; i<5; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             a++;
//             printf("%d ", a);
//         }
//         printf("\n");
//     }

//     return 0;
// }