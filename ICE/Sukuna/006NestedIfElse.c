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

// =============================================================

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