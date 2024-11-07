// call by value and call by referance 


#include<stdio.h>

void swap(int *a, int *b)
{
    // int c;
    // c = *a;
    // *a = *b;
    // *b = c;

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b; 
}

int main()
{
    int a = 10, b = 20;
    printf("a = %d and b = %d\n",a,b);

    swap(&a,&b);

    printf("a = %d and b = %d\n",a,b);
    return 0;
}


// // =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=



// #include<stdio.h>

// void getValue(int *var)
// {
//     int num;
//     printf("enter a number = ");
//     scanf("%d", &num);
//     *var = num;
// }

// int main()
// {
//     int a,b;
//     getValue(&a);
//     getValue(&b);
//     printf("a = %d b = %d", a,b);
//     return 0;
// }