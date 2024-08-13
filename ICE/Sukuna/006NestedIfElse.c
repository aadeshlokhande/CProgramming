// nested if else 


// if (condition)
// {
//     code;
//     if (condition)
//     {
//         code;
//     }
//     else 
//     {
//         code;
//     }
// }
// else 
// {
//     code;
//     if (condition)
//     {
//         code;
//     }
//     else 
//     {
//         code;
//     }
// }



// if (condition)
// {
//     code;
//     if (condition)
//     {
//         code;
//         if (condition)
//         {
//             code;
//         }
//         else 
//         {
//             code;
//         }
//     }
//     else 
//     {
//         code;
//     }
// }
// else 
// {
//     code;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
//     // printf("%d",age);
//     if(age>0 && age<=80)
//     {
//         if(age>18)
//         {
//             printf("you can drive");
//         }
//         else 
//         {
//             printf("you can't drive");
//         }
//     }
//     else 
//     {
//         printf("invalid age");
//     }
//     return 0;
// }

// =============================================================

// print greatest value between 3 number


// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);
//     printf("Enter a number = ");
//     scanf("%d",&c);

//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("A is greater");
//         }
//         else 
//         {
//             printf("C is greater");
//         }
//     }
//     else 
//     {
//         if(b>c)
//         {
//             printf("B is greater");
//         }
//         else 
//         {
//             printf("C is greater");
//         }
//     }

//     return 0;
// }

// ==========================================================

// dubai 
// paisa >= 100000
// fds >= 5 
// permission == 1 


// #include<stdio.h>
// int main()
// {
//     int paisa, fds, permission;
//     printf("budget kitna hai = ");
//     scanf("%d",&paisa);
//     if(paisa >= 100000)
//     {
//         printf("apke sath kitne fds hai = ");
//         scanf("%d",&fds);
//         if(fds>=5)
//         {
//             printf("Kya abba ne permission di hai 1/0 = ");
//             scanf("%d",&permission);
//             if(permission==1)
//             {
//                 printf("Aap dubai ja sakte ho");
//             }
//             else 
//             {
//                 printf("aap nhi ja sakte");
//             }
//         }
//         else 
//         {
//             printf("apko kuch fds add krne pdege");
//         }
//     }
//     else 
//     {
//         printf("bhag ja bhik mange");
//     }

//     return 0;
// }


// =======================================================


// 1,2,3,4....10 
// 11 12 13 14.....20
// 21 22 23 .......30
// .
// .
// .
// 91 92 93 .....100


// #include<stdio.h>
// int main()
// {
//     int a = 0;
//     for(int i = 1; i<=10; i++)
//     {
//         for(int j = 1; j<=10; j++)
//         {
//             ++a;
//             printf("%d \t",a);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// 1 11 21 31 .....91 
// 2 12 22 32 .....92
// .
// .
// .
// 10,20,30........100

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=10; i++)
//     {
//         int a = i;
//         for(int j = 1; j<=10; j++)
//         {
//             printf("%d \t",a);
//             a += 10;
//         }
//         printf("\n");
//     }
//     return 0;
// }


