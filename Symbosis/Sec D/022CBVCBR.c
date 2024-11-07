// call by value and call by referance



// #include<stdio.h>
// void swap(int *a, int *b)
// {
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }

// int main()
// {
//     int a = 10, b = 20;

//     printf("a = %d and b = %d\n",a,b);
//     swap(&a,&b);
//     printf("a = %d and b = %d\n",a,b);

//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

#include<stdio.h>
void getValue(int *a)
{
    int num;
    printf("enter a number = ");
    scanf("%d", &num);
    *a = num;
}

int main()
{
    int var1,var2;
    getValue(&var1);
    getValue(&var2);
    printf("%d + %d = %d", var1, var2 , var1+var2);
    return 0;
}
