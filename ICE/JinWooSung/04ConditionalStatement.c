// **************** Conditional statements ****************

// 0 ---> False
// 1,2,3,----> True

// if
// syntax
// if (condition)
// {
//     code;
// }
// #include<stdio.h>
// int main()
// {
//     int num = 10;

//     if(num < 20)
//     {
//         printf("Hello...");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
//     if(age>18)
//     {
//         printf("Hello baby...");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if(age>18)
//     {
//         printf("Adult ");
//     }
    
//     printf("boy");

//     return 0;
// }



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// if else 
// syntax
// if (condition)
// {
//     True code;
// }
// else
// {
//     False code;
// }


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
//     if (age>18)
//     {
//         printf("you can drive");
//     }
//     else 
//     {
//         printf("you can't drive");
//     }
//     return 0;
// }

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


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     if(num % 2 == 0)
//     {
//         printf("Even number");
//     }
//     else 
//     {
//         printf("Odd number");
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

// if(condition)
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
// else if(condition)
// {
//     code;
// }
// else if(condition)
// {
//     code;
// }
// else
// {
//     code;
// }

// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("Enter a number = ");
//     scanf("%d",&number);
//     if(number==1)
//     {
//         printf("ONE\n");
//     }
//     else if(number==2)
//     {
//         printf("TWO\n");
//     }
//     else if(number==3)
//     {
//         printf("THREE\n");
//     }
//     else if(number==4)
//     {
//         printf("FOUR\n");
//     }
//     else 
//     {
//         printf("out of range\n");
//     }

//     return 0;
// }


// #################################################
// #################### HOMEWORK ###################
// #################################################


// 1. Check Positive Number
// Ek number input lo aur check karo ki number positive hai ya nahi, `if` use karke.
// Agar number > 0 hai to print “Positive”.

// 2. Check Even Number
// Ek number input lo aur check karo ki wo even hai ya nahi `if` condition se.
// Agar number % 2 == 0 hai to print “Even”.

// 3. Age Validation
// User ki age input lo aur check karo ki age 18 se badi hai ya nahi `if else` se.
// 18+ eligible, otherwise not eligible.

// 4. Maximum of Two Numbers
// Do number input lo aur bada number print karo `if else` use karke.
// Compare using if(a > b).

// 5. Check Odd Number
// Check karo ki number odd hai ya nahi.
// Agar number % 2 != 0 hai to odd.

// 6. Check Voting Eligibility
// Age input lo aur print karo ki vote de sakte ho ya nahi.
// 18+ yes, else no.

// 7. Check Student Pass or Fail
// Marks input lo aur check karo ki 33 se upar hai to pass warna fail.
// Use if else.

// 8. Temperature Conditions
// Temperature input lo. Agar > 30 hot, agar > 20 warm, warna cold (if else ladder).
// Print category.

// 9. Maximum of Three Numbers
// 3 numbers input lo aur bada number print karo `if else ladder`.
// Compare values carefully.

// 10. Check Leap Year
// Ek year input lo aur check karo ki leap year hai ya nahi.
// Year % 4 == 0 use karo.

// 11. Character Vowel or Consonant
// Character input lo aur check karo vowel ya consonant.
// a,e,i,o,u check using if else.

// 12. Check Divisible by 5
// Number input lo aur check karo divisible by 5.
// number % 5 == 0.

// 13. Grade System
// Marks input lo aur grade print karo A,B,C,D,E using `if else ladder`.
// Example: 90+ A, 80+ B, etc.

// 14. Smallest of Two Numbers
// 2 numbers input lo aur chhota number print karo.
// Use if else.

// 15. Positive Negative or Zero
// Number input lo aur print karo positive, negative ya zero.
// Use if else ladder.

// 16. Check Multiple of 10
// Check karo number multiple of 10 hai ya nahi.
// number % 10 == 0.

// 18. Check Eligibility for Scholarship
// Marks >= 85 to eligible else not eligible.
// Use if else.

// 19. Check 2-digit number
// Check karo number 2 digit ka hai ya nahi.
// number >= 10 && number <= 99.

// 20. Check Electricity Bill Category
// Units input lo: >300 high, >200 medium, ≤200 low.
// Use if else ladder.

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// **************** Nested If Else **************** 


// if(condition)
// {
//     code; ---->
//     if(condition)
//     {
//         code; ---->
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

// 0-100 ---> human life span 

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     if (0<=age && age<=100)
//     {
//         if(age>=18)
//         {
//             printf("You can drive");
//         }
//         else
//         {
//             printf("you can't drive");
//         }
//     }
//     else 
//     {
//         printf("invalid age...");
//     }
    

//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// if(condition)
// {
//     if(condition)
//     {
//         if(condition)
//         {
//         }
//         else 
//         {
//         }
//     }
//     else 
//     {
//     }
// }
// else 
// {
// }

// goa trip
// budget >= 10000
// fds >= 5
// permission == 1

// #include<stdio.h>
// int main()
// {
//     int budget, fds, permission;
//     printf("Enter a budget = ");
//     scanf("%d",&budget);
//     if(budget>=10000)
//     {
//         printf("how many fds you are = ");
//         scanf("%d",&fds);
//         if(fds>=5)
//         {
//             printf("abba ne permission di hai ky (1/0) = ");
//             scanf("%d",&permission);
//             if(permission==1)
//             {
//                 printf("Aap goa ja sakte hai...");
//             }
//             else 
//             {
//                 printf("Aap goa nhi ja sakte...");
//             }
//         }
//         else 
//         {
//             printf("aur kuch fds add kro.... ");
//         }
//     }
//     else 
//     {
//         printf("Bhag ja bhikmange....");
//     }
//     return 0;
// }



// #################################################
// #################### HOMEWORK ###################
// #################################################

// get 3 numbers and from user and print greatest value using nested if else
// a,b,c 
// a<->b
// a: a<->c --->   a
// a: a<->c --->   c 
// b: b<->c --->   b 
// b: b<->c --->   c 


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("Enter a number = ");
    scanf("%d",&b);
    printf("Enter a number = ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater", a);
        }
        else 
        {
            printf("%d is greater", c);
        }
    }
    else 
    {
        if(b>c)
        {
            printf("%d is greater", b);
        }
        else 
        {
            printf("%d is greater", c);
        }
    }

    return 0;
}





// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// **************** Switch Case ****************

// switch(value/ exression)
// {
//     case value1:
//         code 
    
//     case value2:
//         code 
    
//     case value3:
//         code
    
//     default:
//         code 

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
//         printf("one\n");
//         break;
        
//         case 2:
//         printf("two\n");
//         break;
        
//         case 3:
//         printf("Three\n");
//         break;
        
//         case 4:
//         printf("Four\n");
//         break;
        
//         default:
//             printf("invalid number...");
//             break;
//     }
//     return 0;
// }

// #################################################
// #################### HOMEWORK ###################
// #################################################

// get value from user and print month name 

// get value from user and print week days (1-7)
// #include <stdio.h>
// int main() 
// {
//     int day;
//     printf("Enter a number (1-7): ");
//     scanf("%d", &day);
//     switch(day % 7) 
//     {
//         case 1: 
//             printf("Monday\n"); 
//             break;
//         case 2: 
//             printf("Tuesday\n"); 
//             break;
//         case 3: 
//             printf("Wednesday\n"); 
//             break;
//         case 4: 
//             printf("Thursday\n"); 
//             break;
//         case 5: 
//             printf("Friday\n"); 
//             break;
//         case 6: 
//             printf("Saturday\n"); 
//             break;
        
//         default: 
//             printf("Sunday\n"); 
//             break;

//     }
//     return 0;
// }



// get value from user and print week day for anynumber
// 1234 ---> 