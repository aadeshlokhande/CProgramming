// pointer - &,*

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("value of a = %d and address of a = %p\n",a,&a);
// }


// int *pointerName;
// pointerName = &variable

#include<stdio.h>
int main()
{
    int priya = 21;
    int *aryan;
    aryan = &priya;
    
    printf("age of priya = %d\n",priya);
    printf("Address of priya = %p\n",&priya);
    printf("value of aryan = %p\n",aryan);
    printf("Address of aryan = %p\n",&aryan);
    printf("value of *aryan = %d\n",*aryan);

    int **police;
    police = &aryan;
    printf("value of police = %p\n",police);
    printf("Address of police = %p\n",&police);
    printf("value of *police = %p\n",*police);
    printf("value of **police = %d\n",**police);

}