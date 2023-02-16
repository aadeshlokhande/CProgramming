// goto statements - jump statement

// goto abc; 

// abc:
//     statements

// #include<stdio.h>
// int main()
// {
//     printf("Hello ");
//     goto lol;
//     printf("Good evening ");
//     lol:
//     printf("Aadesh Lokhande ");
// }



// #include<stdio.h>
// int main()
// {
//     printf("Hello ");
//     lol:
//     printf("Good evening ");
//     goto lol;
//     printf("Aadesh Lokhande ");
// }



// #include<stdio.h>
// int main()
// {
//     int a = 5;
//     printf("Hello ");
//     lol:
//     printf("Good evening ");
//     if(a>1)
//     {
//         --a;
//         goto lol;
//     }
//     printf("Aadesh Lokhande ");
// }


// ******************** Homework ******************

// get value from user and print counting 1 to that number
// get value from user and print the table


// +++++++++++++++++++++++++++++++++++
// get value from user and print counting 1 to that number
#include<stdio.h>
int main()
{
    int a,b=1;
    printf("Enter a number = ");
    scanf("%d",&a);

    hello:
        printf("%d\n",b);
    if(a>b)
    {
        ++b;
        goto hello;
    }
}
