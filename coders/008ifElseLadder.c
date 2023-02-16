// if else ladder 
// if(condition)
// {
//     statements
// }
// else if (condition)
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
//     statements
// }


#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);

    if(a==1)
    {
        printf("ONE\n");
    }
    else if(a==2)
    {
        printf("TWO\n");
    }
    else if(a==3)
    {
        printf("THREE\n");
    }
    else
    {
        printf("invalid data\n");
    }

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);

//     if(a>9 && a<100)
//     {
//         printf("its 2 digit number\n");
//     }
//     else
//     {
//         printf("its not a 2 digit number\n");
//     }
// }


// ******* Homework **********
// get number from user and print monthname
// get number from user and print weekday - up to 7
// get number from user and print weekday 

// get percentage from user and print grades
// 0 - 35 = fail 
// 35 - 50 = c grade 
// 50 - 75 = b grade 
// 75 - 90 = a grade 
// 90 - 100 = A+  grade
