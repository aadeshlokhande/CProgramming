// Switch case

// switch(value)
// {
//     case value1:
//         statements;
    
//     case value2:
//         statements

//     case value3:
//         statemetnts
//     .
//     .
//     .
//     default:
//         statements;
// }


// example
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





#include<stdio.h>
int main()
{
    int a,b,num;
    printf("Press 1 : add\n");
    printf("Press 2 : sub\n");
    printf("Press 3 : div\n");
    printf("Press 4 : multi\n");
    printf("enter your choice = ");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("Enter a 1st value = ");
            scanf("%d",&a);
            printf("Enter a 2nd value = ");
            scanf("%d",&b);
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        
        case 2:
            printf("Enter a 1st value = ");
            scanf("%d",&a);
            printf("Enter a 2nd value = ");
            scanf("%d",&b);
            printf("%d - %d = %d\n",a,b,a-b);
            break;

        case 3:
            printf("Enter a 1st value = ");
            scanf("%d",&a);
            printf("Enter a 2nd value = ");
            scanf("%d",&b);
            printf("%d / %d = %d\n",a,b,a/b);
            break;

        case 4:
            printf("Enter a 1st value = ");
            scanf("%d",&a);
            printf("Enter a 2nd value = ");
            scanf("%d",&b);
            printf("%d x %d = %d\n",a,b,a*b);
            break;

        default:
            printf("invalid number\n");
            break;

    }
}

// ************** homework ***************

// get date from user and print week day 
// get number form user and print month name 





