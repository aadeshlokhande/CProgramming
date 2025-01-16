// Pointer ----> &, *

// hex-dec -----> %p 


// 0x_________

#include<stdio.h>
int main()
{
    int a = 10;
    
    int *ptr;
    ptr = &a;
    
    printf("value of a = %d\n",a);
    printf("address of a = %p\n", &a);
    printf("value of ptr = %p\n",ptr);
    printf("address of ptr = %p\n",&ptr);
    printf("value of *ptr = %d\n", *ptr);
    
    *ptr = 100;
    printf("value of a = %d",a);
    return 0;
}



