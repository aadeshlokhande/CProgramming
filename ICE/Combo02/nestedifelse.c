// Nested if else

// if(condition)
// {
//     code;
//     if(condition)
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
//     if(condition)
//     {
//         code;
//     }
//     else 
//     {
//         code;
//     }
// }


// if(condition)
// {
//     code;
//     if(condition)
//     {
//         code;
//         if(condition)
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



// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if(age>=0 && age<=80)
//     {
//         if(age>=18)
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

// ==========================================================


// Goa
// paisa>=10000
// permission == 1
// fds > 5

// #include<stdio.h>
// int main()
// {
//     int paisa, permission, fds;
//     printf("apka budget kitna hai = ");
//     scanf("%d",&paisa);
//     if(paisa>10000)
//     {
//         printf("apke sath kitne fds hai = ");
//         scanf("%d",&fds);
//         if(fds>5)
//         {
//             printf("kya parents ki permission hai = ");
//             scanf("%d",&permission);
//             if(permission==1)
//             {
//                 printf("aap Goa ja sakte ho");
//             }
//             else
//             {
//                 printf("abba ko manao");
//             }
//         }
//         else
//         {
//             printf("aur fds ko add kro");
//         }
//     }
//     else 
//     {
//         printf("bhag ja bhikmange ");
//     }
//     return 0;
// }

// =======================================================
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

    // if(a>c)
    // {
    //     if(a>b)
    //     {
    //         printf("%d is greater\n",a);
    //     }
    //     else 
    //     {
    //         if(c>a)
    //         {
    //             printf("%d is greater\n",c);
    //         }
    //         else 
    //         {
    //             printf("%d is greater\n",b);
    //         }

    //     }
    // }
    // else
    // {
    //     printf("%d is greater\n",c);

    // }
//     return 0;
// }



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
//             printf("%d is greater\n",a);
//         }
//         else 
//         {
//             printf("%d is greater\n",c);
//         }
//     }
//     else 
//     {
//         if(b>c)
//         {
//             printf("%d is greater\n",b); 
//         }
//         else 
//         {
//             printf("%d is greater\n",c);
//         }
//     }
// }

// ===================================================================




// ATM

// pin = 1122
// bal = 12000

// press 1: withdraw
//     enter a pin = 1122
//         enter a amount = 1000
//             transaction done 
//             current bal = 11000
//         low balance
//     wrong pin (re-enter)

// press 2: check balance
//     enter a pin = 1122
//         current bal = 12000
//     wrong pin (re-enter)

// press 3: change pin 
//     enter a pin = 1122
//         enter a new pin = 1234
//         confirm your pin = 1234
//             pin changed
//         pin doesn't match
//     wrong pin (re-enter)
    
// press 4: deposit
//     enter a pin = 1122
//         enter a amount = 1000
//             current balance = 13000
//     wrong pin 

// thank you 


