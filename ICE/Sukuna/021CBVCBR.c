// call by value and call by referance


// #include<stdio.h>
// void add(int a, int b)
// {
//     printf("%d",a+b) ;
// }

// int main()
// {
//     add(10,20);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

#include<stdio.h>
void swapNum(int *ptrA, int *ptrB)
{
    int temp;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main()
{
    int a = 10 , b = 20;
    printf("a = %d and b = %d\n",a,b);
    swapNum(&a,&b);
    printf("a = %d and b = %d\n",a+2,b+3);
    
    return 0;
}

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// #include<stdio.h>

// void getValue(int *ptrA)
// {
//     int lol;
//     printf("enter a number = ");
//     scanf("%d",&lol);
//     *ptrA = lol;
// }

// int main()
// {
//     int a;
//     getValue(&a);
//     printf("a = %d",a+9);
//     return 0;
// }



