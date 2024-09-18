// Pointer - *, &

// int a;
// int *ptr;
// ptr = &a;
// %p
// 0x90234023abc

// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     int *ptr;
//     ptr = &a;
//     printf("value of a = %d\n",a);
//     printf("address of a = %p\n",&a);
//     printf("value of ptr = %p\n",ptr);
//     printf("address of ptr = %p\n",&ptr);
//     printf("value of *ptr = %d\n",*ptr);
//     return 0;
// }


// ---------------------------------------

// pointer --- chhichhora ladka---> rohit 

#include<stdio.h>
int main()
{
    int priya = 21;
    int *rohit;
    rohit = &priya;
    
    printf("value of priya = %d\n",priya);
    printf("address of priya = %p\n",&priya);
    printf("value of rohit = %p\n",rohit);
    printf("address of rohit = %p\n",&rohit);
    printf("value of *rohit = %d\n",*rohit);
    
    int **police;
    police = &rohit;
    printf("value of police = %p\n",police);
    printf("address of police = %p\n",&police);
    printf("value of *police = %p\n",*police);
    printf("value of **police = %d\n",**police);
      
}


// a = 10 
// int *b;
// b = &a;
// *b = 100;



