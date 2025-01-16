// conditional statements
// if  - agar 
// syntax
// if(condition)
// {
//     statements;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     if(a<100)
//     {
//         printf("Hello");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter your age = ");
//     scanf("%d",&age);
    
//     if(age > 18)
//     {
//         printf("adult ");
//     }
// }



// if else 
// syntax
// if(condition)
// {
//     statements;
// }
// else 
// {
//     statements;
// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age = ");
//     scanf("%d",&age);
    
//     if(age > 18)
//     {
//         printf("you can vote");
//     }
//     else
//     {
//         printf("you can't vote");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int var1, var2;
//     printf("Enter a number = ");
//     scanf("%d",&var1);
//     printf("Enter a number = ");
//     scanf("%d",&var2);
    
//     if(var1 > var2)
//     {
//         printf("greater value = %d",var1);
//     }
//     else 
//     {
//         printf("greater value = %d",var2);
//     }
    
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
    
//     if(num > 0)
//     {
//         printf("positive number");
//     }
//     else
//     {
//         printf("negative number");
//     }
// }


// if else ladder 
// if(condition)
// {
//     statements;
// }
// else if(condition)
// {
//     statements;
// }
// else if(condition)
// {
//     statements;
// }
// else if(condition)
// {
//     statements;
// }
// .
// .
// .
// else
// {
//     statements;
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     if(num==1)
//     {
//         printf("one");
//     }
//     else if(num==2)
//     {
//         printf("TWO");
//     }
//     else if(num==3)
//     {
//         printf("THREE");
//     }
//     else if(num==4)
//     {
//         printf("FOUR");
//     }
//     else
//     {
//         printf("invalid input");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
    
//     if(num > 0)
//     {
//         printf("positive number");
//     }
//     else if(num < 0)
//     {
//         printf("negative number");
//     }
//     else
//     {
//         printf("number is zero");
//     }
// }


// nested if else

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


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter your age = ");
//     scanf("%d",&age);
//     if(age > 0 && age < 75)
//     {
//         if(age > 18)
//         {
//             printf("you can drive");
//         }
//         else
//         {
//             printf("you cant drive");
//         }
//     }
//     else
//     {
//         printf("your age is invalid");
//     }
// }



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


// card == 1
// pin = 1234
// balance > 0 



// #include<stdio.h>
// int main()
// {
//     int card,pin,balance;
//     printf("kya apke pass card hai 1/0 = ");
//     scanf("%d",&card);
//     if(card==1)
//     {
//         printf("apki pin kya hai = ");
//         scanf("%d",&pin);
//         if(pin==1234)
//         {
//             printf("apke account me kitna balance hai = ");
//             scanf("%d",&balance);
//             if(balance>0)
//             {
//                 printf("aap cash nikal sakte ho");
//             }
//             else
//             {
//                 printf("bhag ja bhikmange");
//             }
//         }
//         else
//         {
//             printf("incorrect pin");
//         }
//     }
//     else
//     {
//         printf("jao pahle card leke aao");
//     }
// }

// ------------------------HomeWork------------------------------------

// get 2 numbers from user and print smaller number 
// get 2 numbers from user and check both are equal or not 
// get 3 angles from user and print its triangle or not 
// get a number from user and check its even or odd 
// get year from user and check its leap year or not 

// get number from user and print month names
// get number from user and print week days
// get percentage and print grades
//             0-35 = fail
//             35-50 = c grade 
//             50- 75 = b grade 
//             75 - 90 = a grade
//             90 - 100 = a+ grade


// get 3 numbers from user and print gretest value

// get seconds from user and convert it into hour min and sec 
// example: 
// 1) enter a seconds = 4000
// 1 hr = 3600
// 6 min = 360 
// 40 sec = 0 

// 500
// 0 hr = 500
// 8 min = 20 
// 20 sec = 0 

// 3800 
// 1 hr = 3600 = 200
// 3 min = 180 = 20 
// 20 sec 


// 1 hr 3 min 20 sec 


// -----------------------------------------------------
// area of circle = 3.14 * r * r ;

// #include<stdio.h>
// int main()
// {
//     int r;
//     float area;
    
//     printf("Enter a rad = ");
//     scanf("%d",&r);
    
//     area = 3.14 * r * r;
//     printf("area a circle = %f",area);
// }


// ----------------------------------------------

// mod = %
// dogs = 7
// 25

// #include<stdio.h>
// int main()
// {
//     int dogs = 7, cookies,eat,remain;
    
//     printf("Enter a cookies = ");
//     scanf("%d",&cookies);
    
//     eat = cookies / dogs;
//     remain = cookies % dogs;
    
//     printf("eat = %d and remain = %d",eat,remain);
// }

































