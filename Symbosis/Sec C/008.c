// nested if else


// if(condtion)
// {
//     code;
//     if(condtion)
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
//     if(condtion)
//     {
//         code;
//     }
//     else 
//     {
//         code;
//     }
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age = ");
//     scanf("%d",&age);

//     if(age>=0 && age<=90)
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


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=







// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// if(condtion)
// {
//     code;
//     if(condtion)
//     {
//         code;
//         if(condtion)
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

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// manali

// budget >= 10000
// fds >= 5
// permission == 1


// #include<stdio.h>
// int main()
// {
//     int budget, fds, permission;

//     printf("kitna budget hai = ");
//     scanf("%d",&budget);
//     if(budget>= 10000)
//     {
//         printf("apke sath kitne fds hai = ");
//         scanf("%d",&fds);
//         if(fds>=5)
//         {
//             printf("parents ki permission hai kya 1/0 = ");
//             scanf("%d",&permission);
//             if(permission==1)
//             {
//                 printf("aap manali ja sakte hai");
//             }
//             else 
//             {
//                 printf("abba nhi mane");
//             }
//         }
//         else 
//         {
//             printf("add fds");
//         }
//     }
//     else 
//     {
//         printf("bhag ja bhikmange");
//     }
//     return 0;
// }

// #################################################
// #################### HOMEWORK ###################
// #################################################

// get 3 values from user and print greater number using nested if else 

// enter a seconds = 4000
// hr = 3600 = 1 
// min = 360 = 6 
// sec = 40 
// 1 hr, 6 min, 40 sec 

// input
// bis = 20 
// dog = 6 
// output 
// eat = 3 
// rem = 2 


// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     switch(num % 7)
//     {
//         case 1:
//             printf("monday\n");
//             break;
        
//         case 2:
//             printf("tueday\n");
//             break;

//         case 3:
//             printf("wednesday\n");
//             break;
        
//         case 4:
//             printf("thursday\n");
//             break;
        
//         case 5:
//             printf("friday\n");
//             break;
        
//         case 6:
//             printf("saturday\n");
//             break;
        
//         case 0:
//             printf("sunday\n");
//             break;

//         default:
//             printf("invalid number");
//     }
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// #include<stdio.h>
// int main()
// {
//     int min, hr, sec, rem;

//     printf("Enter a seconds = ");
//     scanf("%d",&sec);

//     hr = sec / 3600;
//     rem = sec % 3600;
//     min = rem / 60;
//     sec = rem % 60;

//     printf("hr = %d\n",hr);
//     printf("min = %d\n",min);
//     printf("sec = %d\n",sec);

//     return 0;
// }