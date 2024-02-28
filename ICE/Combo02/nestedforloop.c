// Nested For Loop

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=10; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             printf("%d%d ",i,j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// ===============================


// 11 12 13 14 15 
// 21 22 23 24 25 
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

// 1 1 1 1 1
// 0 0 0 0 0 
// 0 0 0 0 0 
// 0 0 0 0 0 
// 0 0 0 0 0 



// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             if(i==1)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ======================================


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

// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             if(i>=j)
//             {
//                 printf("1 ");
//             }
//             else 
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int a = 'a';
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             printf("%c ",a-32);
//             ++a;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ==================================================
// 1 2 3 4 5
// 1       5
// 1       5
// 1       5 
// 1 2 3 4 5 


// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             if(i==1 || i==5 || j==1|| j==5)
//             {
//                 printf("%d ",j);
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

// ===========================================





// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=5; i++)
//     {
//         for(int j =1; j<=5; j++)
//         {
//             if(i==3 || j==3|| (i%2==0 && j%2==0))
//             {
//                 printf("%d ",j);
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



// #################################################
// #################### HOMEWORK ###################
// #################################################



// 1 0 0 0 0
// 1 0 0 0 0
// 1 0 0 0 0
// 1 0 0 0 0
// 1 0 0 0 0


// 1 0 0 0 0
// 1 1 0 0 0
// 1 1 1 0 0
// 1 1 1 1 0
// 1 1 1 1 1


// 1 1 1 1 1
// 0 1 1 1 1
// 0 0 1 1 1
// 0 0 0 1 1
// 0 0 0 0 1


// 1 0 0 0 0
// 0 1 0 0 0
// 0 0 1 0 0
// 0 0 0 1 0
// 0 0 0 0 1


// 0 0 0 0 1
// 0 0 0 1 0
// 0 0 1 0 0
// 0 1 0 0 0
// 1 0 0 0 0

// 1 1 1 1 1
// 1 0 0 0 1
// 1 0 0 0 1
// 1 0 0 0 1
// 1 1 1 1 1

// 1 1 1 1 1
// 1 1 0 1 1
// 1 0 1 0 1
// 1 1 0 1 1
// 1 1 1 1 1

// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1
// 0 1 0 1 0
// 1 0 1 0 1


// *
// * *
// * * *
// * * * *
// * * * * *

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// * * * * *
//   * * * *
//     * * *
//       * *
//         *

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// * * * * *
// * * * *
// * * *
// * *
// *


// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// *
// * *
// *   *
// *     *
// * * * * *


// * * * * *
// * *   * *
// *   *   *
// * *   * *
// * * * * *



// ======================================================================

// *
// * *
// *   *
// *     *
// * * * * *

// 11 12 13 14 15 
// 21 22 23 24 25 
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j=1; j<=5; j++)
//         {
//             if(i+j >= 6)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


