// Loops


// sorry babu...
// sorry babu...
// sorry babu...
// sorry babu...
// sorry babu...
// sorry babu...
// sorry babu...
// sorry babu...
// sorry babu...

// for loop 

// for(init; cond; inc/dec)
// {
//     code;
// }


// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=10; a++)
//     {
//         printf("%d\n",a);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     for(int a = 10; a>=1; a--)
//     {
//         printf("%d\n",a);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int a = 65; a<=90; a++)
//     {
//         printf("%c\n",a);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 90;
//     printf("%c",a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     for(int a = 1; a<=10; a++)
//     {
//         printf("%d\n",num*a);
//     }
//     return 0;
// }

// ====================================



// nested for loop

// for(init; cond; inc/dec)
// {
//     code;
//     for(init; cond; inc/dec)
//     {
//         code;
//     }
//     code;
// }



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






// 11      12 13 14 15 
// 21 22       23 24 25
// 31 32 33        34 35
// 41 42 43 44         45
// 51 52 53 54 55

// 1
// 2 3 
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     for(int i = 1; i<=5; i++)
//     {
//         for (int j = 1; j<=5; j++)
//         {
//             if(i>=j)
//             {
//                 ++a;
//                 printf("%d ",a);
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


// 11 12 13 14 15 
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

// * * * * *
// *       *
// *       *
// *       *
// * * * * * 


// #include<stdio.h>
// int main()
// {

//     for(int i = 1; i<=5; i++)
//     {
//         for (int j = 1; j<=5; j++)
//         {
//             if(i==1 || i==5 || j==1 || j==5)
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
