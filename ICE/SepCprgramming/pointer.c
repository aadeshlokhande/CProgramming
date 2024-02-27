// pointer - *, &
#include<stdio.h>
int main()
{
    int var = 10;
    int *ptr;
    ptr = &var;
    printf("var = %p\n",&var);
    printf("ptr = %p\n",ptr);
    printf("&ptr = %p\n",&ptr);
    printf("*ptr = %d\n",*ptr);

    int **ptr2;
    ptr2 = &ptr;
    printf("ptr2 = %p\n",ptr2);
    printf("&ptr2 = %p\n",&ptr2);
    printf("*ptr2 = %p\n",*ptr2);
    printf("**ptr2 = %d\n",**ptr2);

    return 0;
}