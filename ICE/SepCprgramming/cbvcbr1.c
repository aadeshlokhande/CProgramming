// call by value and call by referance


#include<stdio.h>
void swap(int *a,int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("a = %d and b = %d\n",a,b);
    return 0;
}
