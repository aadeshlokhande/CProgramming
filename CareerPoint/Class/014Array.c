// Array

// #include<stdio.h>
// int main()
// {
    // datatype ArrayName[size];
    // int a[10];

    // datatype ArrayName[size] = {values};
    // int a[10] = {12,43,65,87,23,43,45,76,54,24};

    // a[2] = 78;
    // printf("%d\n",a[2]);

    // printf("Enter a number = ");
    // scanf("%d",&a[5]);
    // printf("%d\n",a[5]);

//     for(int i = 0; i<10;i++)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a[i]);
//     }

//     for(int i = 0; i<10; i++)
//     {
//         printf("a[%d] = %d\n",i,a[i]);
//     }
// }


// +++++++++++++++ Homework +++++++++++++++++
// get 10 values from user and print total addition
// get 10 values from user and print all even numbers
// get 10 values from user and print number of odd numbers and even number;
// store 10 numbers in array and print in reverse order



// ++++++++++++++++++++++++++++++++++++
// get 10 values from user and print number of odd numbers and even number;
#include<stdio.h>
int main()
{
    int arr[10];
    int even = 0, odd = 0;
    for(int i = 0; i<10; i++)
    {
        printf("Enter a number = ");
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            ++even;
        }
        else 
        {
            ++odd;
        }
    }

    printf("Even = %d and odd = %d\n",even, odd);

}