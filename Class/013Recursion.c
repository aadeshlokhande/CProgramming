// Recursion

// returntype functionName(arguments)
// {
//     statements;
//     functionName(values);
// }

// example 1
// #include<stdio.h>
// void abc()
// {
//     printf("Hello ");
//     abc();
// }

// int main()
// {
//     abc();
// }

// example 2
// #include<stdio.h>
// void abc(int a)
// {
//     if(a>0)
//     {
//         --a;
//         printf("Hello ");
//         abc(a);
//     }
// }

// int main()
// {
//     abc(5);
// }


// __________________________________
// Factorial Program using recursion
// 5! = 5x4x3x2x1 
// 4! = 4x3x2x1
// 5! = 5x4!
// n! = n X (n-1)!
// 1! = 1
// 0! = 1

#include<stdio.h>
int fact(int num)
{
    if(num==1 || num==0)
    {
        return 1;
    }
    else 
    {
        return num * fact(num-1);
    }
}

int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("factorial of %d is %d\n",a, fact(a));
}
// ========================================