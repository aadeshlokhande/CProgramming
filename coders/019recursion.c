// Recursion 

// #include<stdio.h>
// void abc()
// {
//     printf("Hello buddy ");
//     abc();
// }

// int main()
// {
//     abc();
// }




// #include<stdio.h>
// void abc(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello buddy \n");
//         abc(a-1);
//     }
// }

// int main()
// {
//     abc(5);
// }


// --------------Factorial--------------------
// 5! = 5x4x3x2x1
// 4! = 4x3x2x1 

// 5! = 5x4! 
// n! = n x (n-1)! 

// 0! = 1 
// 1! = 1 

#include<stdio.h>
int fact(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else 
    {
        return a * fact(a-1);
    }
}


int main()
{
    int num;
    printf("Enter a number = ");
    scanf("%d",&num);

    printf("factorial of %d is %d\n",num,fact(num));
    return 0;
}