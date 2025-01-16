// Nested if else 

// if(condition)
// {
//     statements;
//     if(condition)
//     {
//         statements;
//     }
//     else 
//     {
//         statements;
//     }
// }
// else 
// {
//     statements;
//     if(condition)
//     {
//         statements;
//     }
//     else 
//     {
//         statements;
//     }
// }

// ========================================================


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
    
//     if(age>0 && age < 75)
//     {
//         if(age > 18)
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



// ========================================================



// if(condition)
// {
//     statements;
//     if(condition)
//     {
//         statements;
//         if(condition)
//         {
//             statements;
//         }
//         else 
//         {
//             statements;
//         }
//     }
//     else 
//     {
//         statements;
//     }
// }
// else 
// {
//     statements;
// }


// ==============================================================


// budget >= 20000
// fds >= 7
// permission == 1 


// #include<stdio.h>
// int main()
// {
//     int budget, fds, permission;
//     printf("budget kitna hai = ");
//     scanf("%d",&budget);
//     if(budget>=20000)
//     {
//         printf("apke sath kitne fds hai = ");
//         scanf("%d",&fds);
//         if(fds>7)
//         {
//             printf("parents ki permission hai kya = ");
//             scanf("%d",&permission);
//             if(permission==1)
//             {
//                 printf("aap goa ja sakte ho");
//             }
//             else 
//             {
//                 printf("jake parents ki permisson leke aao");
//             }
//         }
//         else 
//         {
//             printf("plan cancel");
//         }
//     }
//     else 
//     {
//         printf("bhag ja bhikmange");
//     }

//     return 0;
// }


// =========================== OUTPUT ===================================

// PS G:\My Drive\MyProjects\CProgramming\ICE\BATCH002> .\a.exe                                    
// budget kitna hai = 120
// bhag ja bhikmange

// PS G:\My Drive\MyProjects\CProgramming\ICE\BATCH002> .\a.exe
// budget kitna hai = 22000
// apke sath kitne fds hai = 4
// plan cancel

// PS G:\My Drive\MyProjects\CProgramming\ICE\BATCH002> .\a.exe
// budget kitna hai = 22000
// apke sath kitne fds hai = 9
// parents ki permission hai kya = 0
// jake parents ki permisson leke aao

// PS G:\My Drive\MyProjects\CProgramming\ICE\BATCH002> .\a.exe
// budget kitna hai = 22000
// apke sath kitne fds hai = 10
// parents ki permission hai kya = 1
// aap goa ja sakte ho

// #################################################
// #################### HOMEWORK ###################
// #################################################


// get 3 numbers from user and print greatest number using nested if else