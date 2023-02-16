// switch case 

// switch(value)
// {
//     case value1:
//         statements
    
//     case value2:
//         statements

//     case value3:
//         statements
//     .
//     .
//     .
//     default:
//         statements
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);

//     switch(a)
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

//         case 5:
//             printf("FIVE\n");
//             break;

//         default:
//             printf("invalid input\n");
//             break;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a,b,choice;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     printf("press 1 : add\n");
//     printf("press 2 : sub\n");
//     printf("press 3 : multi\n");
//     printf("press 4 : div\n");
//     printf("Enter your choice = ");
//     scanf("%d",&choice);

//     switch(choice)
//     {
//         case 1:
//             printf("%d + %d = %d\n",a,b,a+b);
//             break;

//         case 2:
//             printf("%d - %d = %d\n",a,b,a-b); 
//             break;

//         case 3:
//             printf("%d x %d = %d\n",a,b,a*b);
//             break;

//         case 4:
//             printf("%d / %d = %d\n",a,b,a/b);
//             break;

//         default:
//             printf("invalid choice\n");
//             break;
//     }
//     return 0;
// }


// =============HomeWork===========
// ATM 

// bal = 12000, pin = 1122

// Press 1 : withdraw
//     enter your pin = 1122
//         enter an amount = 1000
//             transaction successfull
//             current balance = 11000
//         low balance
//     wrong pin 

// Press 2 : check balance
//     enter your pin = 1122
//         current balance = 12000
//     wrong pin 

// Press 3 : Change pin 
//     enter your pin = 1122
//         enter a new pin = 1234
//         confirm your pin = 1234
//             pin changed
//         pin doesn't match
//     wrong pin

// Press 4 : deposit
//     enter your pin = 1122
//         enter an amount = 1000
//             transaction successfull
//             current balance = 13000
//     wrong pin 

// Press 5 : exit 
//     thanks for using our service