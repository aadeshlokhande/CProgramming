// switch case

// switch (value)
// {
//     case value1:
//         code;
        
//     case value2:
//         code;
    
//     case value3:
//         code;
    
//     case value4:
//         code;

//     default:
//         code;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     switch(num)
//     {
//         case 10:
//             printf("ONE\n");
//             break;

//         case 22:
//             printf("TWO\n");
//             break;

//         case 37:
//             printf("THREE\n");
//             break;

//         case 4:
//             printf("FOUR\n");
//             break;
        
//         default:
//             printf("invalid number");
//             break;

//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a,b,ans,choice;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     printf("Press 1 : add\n");
//     printf("Press 2 : sub\n");
//     printf("Press 3 : multi\n");
//     printf("Press 4 : div\n");
//     printf("Enter your choice = ");
//     scanf("%d",&choice);

//     switch(choice)
//     {
//         case 1:
//             ans = a+b;
//             printf("ans = %d\n",ans);
//             break;
//         case 2:
//             ans = a-b;
//             printf("ans = %d\n",ans);
//             break;
//         case 3:
//             ans = a*b;
//             printf("ans = %d\n",ans);
//             break;
//         case 4:
//             ans = a/b;
//             printf("ans = %d\n",ans);
//             break;
        
//         default:
//             printf("invalid choice");
//     }

//     printf("hello buddy");
//     return 0;
// }



// ===================================================


#include<stdio.h>
int main()
{
    // int num = 10;
    // (num > 20) ? printf("yes") : printf("no");
    int x = 10,a;
    a = x > 5 ? x : 0;
    printf("%d",a);
    return 0;
}
