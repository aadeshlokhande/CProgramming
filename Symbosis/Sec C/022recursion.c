// recursion

// #include<stdio.h>

// void hello(int a)
// {
//     if(a>0)
//     {
//         printf("Hello guys...\n");
//         --a;
//         hello(a);
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter a numberr = ");
//     scanf("%d",&num);
//     hello(num);
//     return 0;
// }



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// factorial


// 5! = 5x4x3x2x1
// 4! = 4x3x2x1

// 5! = 5x4!

// n! = n x (n-1)!
// 1! = 1
// 0! = 1



#include<stdio.h>

int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else 
    {
        return a * factorial(a-1);
    }
}

int main()
{
    int num;
    int ans;
    printf("Enter a number = ");
    scanf("%d",&num); // 5

    ans = factorial(num);
    printf("factorial of %d is %d",num, ans);
    return 0;
}