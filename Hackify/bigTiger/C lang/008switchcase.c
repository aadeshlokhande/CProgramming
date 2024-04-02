// Switch case break
// switch value
// {
//     case value1:
//         code;
    
//     case value2:
//         code;
    
//     case value3:
//         code;
//     .
//     .
//     .
    
//     default:
//         code;
// }



// ==================================================

#include<stdio.h>
int main()
{
    int num;

    printf("Enter a nubmer = ");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("ONE\n");
            break;

        case 2:
            printf("TWO\n");
            break;
        
        case 3:
            printf("THREE\n");
            break;

        case 4:
            printf("FOUR\n");
            break;
        
        default:
            printf("invalid number");
            break;
    }

    printf("lol");
    return 0;
}


// get number from user and print month name 
// get number from user and print week day (1-7)
// get number from user and print week day 
// get percent from user and print grade 
