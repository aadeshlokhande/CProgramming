// Recursion

// recursion

// #include<stdio.h>
// int abc()
// {
//     printf("Hello guys... ");
//     abc();
// }

// int main()
// {
//     abc();
// }



// #include<stdio.h>
// int abc(int a)
// {
//     if(a>=1)
//     {
//         printf("Hello guys... ");
//         --a;
//         abc(a);
//     }
// }

// int main()
// {
//     abc(5);
// }


// -----------------------------------

// factorial 
// 5! = 5x4x3x2x1 = 120 
// 4! = 4x3x2x1

// 5! = 5 x 4!
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
    int num,ans;
    printf("Enter a number = ");
    scanf("%d",&num);
    
    ans = factorial(num);
    
    printf("factorial of %d is %d\n",num,ans);
    
}