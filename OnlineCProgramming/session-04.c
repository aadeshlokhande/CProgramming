// 1)
// 1 0 0 
// 1 0 0 
// 1 0 0 

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
//             if(j==1)
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




// 2)
// 1 0 0 
// 0 1 0 
// 0 0 1 


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
//             if(i==j)
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





// 3)
// 1 1 1 
// 0 1 1 
// 0 0 1 

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
//             if(i<=j)
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



// 4)
// 1 0 0 
// 1 1 0 
// 1 1 1 

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
// }

// 5)
// 1 0 1 
// 0 1 0 
// 1 0 1 

// 11 12 13
// 21 22 23
// 31 32 33

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=10; i++)
//     {
//         for(int j = 1; j<=10; j++)
//         {
//             // if(i==j || i+j == 4)
//             if( (i+j)%2==0 )
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }


// 6)
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
//     for(int i = 5; i>=1; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }






// 8)
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
// }



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



// ********************************************
// 9)
//         *
//       * *
//     * * *
//   * * * *
// * * * * * 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 4; j>=i; j--)
//         {
//             printf("  ");
//         }
//         for(int k = 1;k<=i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// 14) 1 to 10 tables
// 1 2 3  . . . . . 10 
// 2 4 6  . . . . . 20 
// 3 6 9  . . . . . 30 
// .
// .
// .
// 10 20 30 .........100


// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=10; i++)
//     {
//         for(int j =1; j<=10; j++)
//         {
//             printf("%d\t",i*j);
//         }
//         printf("\n");
//     }
// }


// 11        
//      *
//     * *
//    * * *
//   * * * *
//  * * * * * 

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=5; i++)
//     {
//         for(int j = 4; j>=i; j--)
//         {
//             printf(" ");
//         }
//         for(int k = 1;k<=i; k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// =========================HOMEWORK===========================
// 1)
// Write a program in C to read 10 numbers from keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 :2
// ...
// Number-10 :2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

// 2)
// Write a program in C to display the cube of the number upto given an integer. 
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :125

// 3)
// Write a program in C to display the multiplication table of a given integer. 
// Test Data :
// Input the number (Table to be calculated) : 15
// Expected Output :
// 15 X 1 = 15
// ...
// ...
// 15 X 10 = 150

// 4)
// Write a program in C to display the n terms of odd natural number and their sum . 
// Test Data
// Input number of terms : 10
// Expected Output :
// The odd numbers are :1 3 5 7 9 11 13 15 17 19
// The Sum of odd Natural Number upto 10 terms : 100

// 5)
// Write a program in C to display the n terms of square natural number and their sum. 
// 1 4 9 16 ... n Terms
// Test Data :
// Input the number of terms : 5
// Expected Output :
// The square natural upto 5 terms are :1 4 9 16 25
// The Sum of Square Natural Number upto 5 terms = 55


// 6)
//   1 
//   2 3 
//  4 5 6 
// 7 8 9 10 

// ==============================================================
// ***********************SWITCH CASE****************************
// ==============================================================

// SYNTAX

// switch(value)
// {
//     case value1:
//         statements;
        
//     case value2:
//         statements;
        
//     case value3:
//         statements;
//     .
//     .
//     .
    
//     default:
//         statements;
// }



// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
    
//     switch(num)
//     {
//         case 1:
//             printf("ONE\n");
//             break;
        
//         case 2:
//             printf("TWO\n");
//             break;
            
//         case 3: 
//             printf("THREE\n");
//             break;
            
//         case 4:
//             printf("FOUR\n");
//             break;
            
//         default:
//             printf("invalid number\n");
//             break;
            
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a, b, op;
    
    
//     printf("Press 1 : add\n");
//     printf("Press 2 : sub\n");
//     printf("Press 3 : multi\n");
//     printf("Press 4 : div\n");
//     printf("Enter your choice = ");
//     scanf("%d",&op);
    
    
    
//     switch(op)
//     {
//         case 1:
//             printf("enter a number = ");
//             scanf("%d",&a);
//             printf("enter a number = ");
//             scanf("%d",&b);
//             printf("%d + %d = %d\n",a,b,a+b);
//             break;
            
//         case 2:
//             printf("enter a number = ");
//             scanf("%d",&a);
//             printf("enter a number = ");
//             scanf("%d",&b);
//             printf("%d - %d = %d\n",a,b,a-b);
//             break;
            
//         case 3:
//             printf("enter a number = ");
//             scanf("%d",&a);
//             printf("enter a number = ");
//             scanf("%d",&b);
//             printf("%d x %d = %d\n",a,b,a*b);
//             break;
            
//         case 4:
//             printf("enter a number = ");
//             scanf("%d",&a);
//             printf("enter a number = ");
//             scanf("%d",&b);
//             printf("%d / %d = %d\n",a,b,a/b);
//             break;
            
//         default:
//             printf("invalid input");
//     }
// }





// ==============================================================
// ************************* GOTO *******************************
// ==============================================================

// LABAL
// GOTO 

// #include<stdio.h>
// int main()
// {
//     printf("Hello, ");
//     goto Abc;
//     printf("Good Morning, ");
//     Abc:
//     printf("Aadesh ");
// }



// #include<stdio.h>
// int main()
// {
//     printf("Hello, ");
//     Abc:
//     printf("Good Morning, ");
//     goto Abc;
//     printf("Aadesh ");
// }



// #include<stdio.h>
// int main()
// {
//     int a = 3;
//     printf("Hello, ");
//     Abc:
//     printf("Good Morning, ");
//     if(a>1)
//     {
//         --a;
//         goto Abc;
//     }
//     printf("Aadesh ");
// }


// ================================
// get number from user and print month name
// get number from user and print week day

// get a number from user and print table using goto 
// print 1 to 10 counting using goto 

