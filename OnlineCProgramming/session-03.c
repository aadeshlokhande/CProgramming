// loop 
// for 
// syntax
// for(init; cond;inc/dec)
// {
//     statements
// }


// 1 - 100
// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=10; a++ )
//     {
//         printf("%d \n",a);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=200; a++ )
//     {
//         printf("Sorry ");
//     }
// }

// 100 - 1 
// #include<stdio.h>
// int main()
// {
//     for(int i = 100; i>=1; i--)
//     {
//         printf("%d\n", i);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=50; a++)
//     {
//         if(a % 2 == 0)
//         {
//             printf("%d\n",a);
//         }
//     }
// }

// // total sum 1 - 10
// #include<stdio.h>
// int main()
// {
//     int sum = 0;
//     int sp,ep;
//     printf("Enter a starting point = ");
//     scanf("%d",&sp);
//     printf("Enter a ending point = ");
//     scanf("%d",&ep);

//     for(int a = sp; a<=ep; a++)
//     {
//         sum = sum + a;
//     }
//     printf("total sum = %d",sum);
// }



// while 

// while (condition)
// {
//     statements
// }

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<10)
//     {
//         printf("Hello ");
//         a++;
//     }
// }



// #include<stdio.h>
// int main ()
// {
//     int a, b, ans, con = 1;
//     while(con == 1)
//     {
//         printf ("Enter a number = ");
//         scanf ("%d", &a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         ans = a + b;
//         printf("%d + %d = %d\n",a,b,ans);
//         printf("Do you want to continue 1/0 = "); 
//         scanf("%d",&con);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int num = 2;
//     while(num>=0)
//     {
//         printf("Enter a negative number = ");
//         scanf("%d",&num);
//     }
//     printf("Thanks for entering negative number");
// }


// do while 

// do 
// {
//     statements;
// }while(condition);


// #include<stdio.h>
// int main()
// {
//     int  num;
//     do 
//     {
//         printf("Enter a negative number = ");
//         scanf("%d",&num);
//     }while(num >= 0);
//     printf("Thanks for entering negative number");
// }


// #include<stdio.h>
// int main ()
// {
//     int a, b, ans, con;
//     do
//     {
//         printf ("Enter a number = ");
//         scanf ("%d", &a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         ans = a + b;
//         printf("%d + %d = %d\n",a,b,ans);
//         printf("Do you want to continue 1/0 = "); 
//         scanf("%d",&con);
//     }while(con == 1);
//     return 0;
// }



// nested for loop 
// for(inti; cond; inc/dec)
// {
//     statements;
//     for(inti; cond; inc/dec)
//     {
//         statements;
//     }
//     statements
// }

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<= 5; i++)              // vertical
//     {
//         for(int j = 1; j<=5;j++)            // horizontal
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i <= 5; i++)              // vertical
//     {
//         for(int j = 1; j<=5;j++)            // horizontal
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

// i = 1 2 3 4 5 6 
// j = 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// output = 
// 1 1 1 1 1 
// 2 2 2 2 2 
// 3 3 3 3 3 
// 4 4 4 4 4 
// 5 5 5 5 5 


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i <= 5; i++)              // vertical
//     {
//         for(int j = 1; j<=i;j++)            // horizontal
//         {
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// i = 1 2 3 4 5 6 
// j = 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5


// output = 
// * 
// * * 
// * * * 
// * * * * 
// * * * * *


// -----------------------------

// 1 1 1  
// 0 0 0  
// 0 0 0 

// 11 12 13
// 21 22 23 
// 31 32 33

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=3; i++)
//     {
//         for(int j = 1; j<=3; j++)
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
// }



// 1)
// 1 0 0 
// 1 0 0 
// 1 0 0 

// 2)
// 1 0 0 
// 0 1 0 
// 0 0 1 

// 3)
// 1 1 1 
// 0 1 1 
// 0 0 1 
// 4)
// 1 0 0 
// 1 1 0 
// 1 1 1 

// 5)
// 1 0 1 
// 0 1 0 
// 1 0 1 


// 6)
// *
// * *
// * * *
// * * * * 
// * * * * *

// 7)
// * * * * *
// * * * *
// * * *
// * *
// * 

// 8)
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *


// 9)
//         *
//       * *
//     * * *
//   * * * *
// * * * * * 

// 10
// * * * * * 
//   * * * *
//     * * *
//       * *
//         *
// 11        
//      *
//     * *
//    * * *
//   * * * *
//  * * * * * 
// 12 
// * * * * *
// *       *
// *       *
// *       *
// * * * * *
// 13
// * 
// * *
// *   *
// *     *
// * * * * *

// 14) 1 to 10 tables
// 1 2 3  . . . . . 10 
// 2 4 6  . . . . . 20 
// 3 6 9  . . . . . 30 
// .
// .
// .
// 10 20 30 .........100

// 15) 1 - 100 counting
// 1 2 3 4 ..... 10 
// 11 12 13 ......20 
// 21 22 23.......30
// .
// .
// .
// 91 92 93 .......100



// 11,12,7,13


// 11        
//     *
//    * *
//   * * *
//  * * * *
// * * * * * 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 4; j>=i; j--)
//         {
//             printf(" ");
//         }
//         for(int k = 1;k<=i;k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }




// 12 
// * * * * *
// *       *
// *       *
// *       *
// * * * * *


// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i==1 || i==5 || j == 1 || j==5)
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
// }


// 7)
// * * * * *
// * * * *
// * * *
// * *
// * 

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
// }







// 13
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


// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i==j || i==5 || j == 1)
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
// }



// * * * * *
// * *   * *
// *   *   * 
// * *   * *
// * * * * *

// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 1; j<=5; j++)
//         {
//             if(i==1 || i==5 || j == 1 || j ==5 || i==j || (i+j) == 6)
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
// }
