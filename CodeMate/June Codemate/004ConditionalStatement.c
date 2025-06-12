// **************** Conditional Statement ****************

// -------------- IF -------------------
// syntax
// if (Condition)
// {
//     code;
// }


// example

// #include<stdio.h>
// int main()
// {
//     int a = 101;
//     if (a<100)
//     {
//         printf("Hello");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if (age>18)
//     {
//         printf("Adult ");
//     }

//     printf("Boy");
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// **************** IF ELSE ****************

// syntax
// if (condition)
// {
//     True_code;
// }
// else 
// {
//     False_code;
// }

// Example 1
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if(age>18)
//     {
//         printf("you can vote\n");
//     }
//     else 
//     {
//         printf("you can't vote\n");
//     }

//     return 0;
// }

// Example 2
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     if (num>0)
//     {
//         printf("+ve number");
//     }
//     else 
//     {
//         printf("-ve number");
//     }
//     return 0;
// }



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// if else ladder 

// |_|
// |_|
// |_|
// |_|
// |_|
// |_|
// | |

// syntax
// if (condition)
// {
//     code;
// }
// else if(condition)
// {
//     code;
// }
// else if(condition)
// {
//     code;
// }
// .
// .
// .
// else 
// {
//     code;
// }


// example 1
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);


//     if (num==1)
//     {
//         printf("ONE\n");
//     }
//     else if(num==2)
//     {
//         printf("TWO\n");
//     }
//     else if(num==3)
//     {
//         printf("THREE\n");
//     }
//     else if(num==4)
//     {
//         printf("FOUR\n");
//     }
//     else 
//     {
//         printf("invalid number");
//     }
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// **************** nested if else ****************

// syntax

// if (condition)
// {
//     True_code;
    // if (condition)
    // {
    //     True_code;
    // }
    // else 
    // {
    //     False_code;
    // }
// }
// else 
// {
//     False_code;
    // if (condition)
    // {
    //     True_code;
    // }
    // else 
    // {
    //     False_code;
    // }
// }


// example 1

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if (age>0 && age<=80)
//     {
//         if (age>18)
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
// switch case 
// goto statement



// ********************************


// #include<stdio.h>
// int main()
// {
//     int age = 10;
//     printf("age = %d\n",age);
//     printf("age = %p\n",&age);

//     return 0;
// }


// 0x5345b23c43a ----> age



// #################################################
// #################### HOMEWORK ###################
// #################################################

// get value from user anmaid check value is positive or negative
// get value from user and check value is even or odd 
// get year from user and check year is leap year or not
// get 3 angles from user and check its triangle or not 
// get value from user and check its 2 digit value or not

// get value from user and print month name
// get value from user and print weekdays
// get percentage from user and print grades 
// get value from user and print number of digit upto 7 digit

// get 3 numbers from user and print greatest number using nested if else

