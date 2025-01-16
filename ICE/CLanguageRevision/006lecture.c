// Pointer *, &

// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     int *ptr;
//     ptr = &a;
//     // printf("value of a = %d\n",a);
//     // printf("address of a = %p\n",&a);
//     // printf("value of ptr = %p\n",ptr);
//     // printf("address of ptr = %p\n",&ptr);
//     // printf("value of *ptr = %d\n",*ptr);
    
//     *ptr = 20;
//     printf("value of a = %d",a);
//     return 0;
// }


// ================================

// function

// returntype functionName()
// {
//     code;
// }

#include<stdio.h>
int sum(int a, int b)
{
    int c ;
    c = a + b;
    // return c;
}


int main()
{
    int ans;
    ans = sum(10,20);
    printf("%d",ans);
    return 0;
}