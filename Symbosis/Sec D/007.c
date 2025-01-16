// Switch Case 

// switch (value)
// {
//     case value1:
//         code;
//     case value2:
//         code;
//     case value3:
//         code;
//     default:
//         code;
// }




#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    switch(num)
    {
        case 10:
            printf("ONE\n");
            // break;

        case 20:
            printf("TWO\n");
            // break;

        case 30:
            printf("THREE\n");
            // break;

        case 40:
            printf("Four\n");
            // break;

        default:    
            printf("invalid number\n");
            // break;

    }

    // printf("Hello");
    return 0;
}






// ================================================


// #include<stdio.h>
// int main()
// {
//     int a,b,choice,ans;

//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     printf("Press 1: add\n");
//     printf("Press 2: sub\n");
//     printf("Press 3: multi\n");
//     printf("Press 4: div\n");
//     printf("enter your choice = ");
//     scanf("%d",&choice);


//     switch(choice)
//     {
//         case 1:
//             ans = a + b;
//             printf("%d + %d = %d\n",a,b,ans);
//             break;
        
//         case 2:
//             ans = a - b;
//             printf("%d - %d = %d\n",a,b,ans);
//             break;
        
//         case 3:
//             ans = a * b;
//             printf("%d x %d = %d\n",a,b,ans);
//             break;
        
//         case 4:
//             ans = a / b;
//             printf("%d / %d = %f\n",a,b,ans);
//             break;
        
//         default:
//             printf("invalid choice");
//             break;

//     }
//     return 0;
// }