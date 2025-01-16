// linear search
// int a[10] = {12,23,34,45,56,67,78,89,32,21};
// num = 52;

// index = 4 
// index = -1 

#include<stdio.h>
int main()
{
    int a[10] = {12,23,34,45,56,67,78,89,56,21};
    int num, index = -1;

    printf("Enter a number = ");
    scanf("%d",&num);
    for(int i = 0; i<10; i++)
    {
        if(a[i]==num)
        {
            index = i;
            break;
        }
    }
    printf("index = %d",index);
    return 0;
}

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// bubble sort 

// a = 10 
// b = 20 

// temp = a 
// a = b 
// b= temp 

// int a[5] = {50,30,40,20,10};


// a[j]>a[j+1]
// {50,30,40,20,10}
// {30,50,40,20,10}
// {30,40,50,20,10}
// {30,40,20,50,10}
// {30,40,20,10,50}

// {30,40,20,10,50}
// {30,20,40,10,50}
// {30,20,10,40,50}

// {30,20,10,40,50}
// {20,30,10,40,50}
// {20,10,30,40,50}


// {20,10,30,40,50}
// {10,20,30,40,50}


// #include <stdio.h>
// int main() 
// {
//     int arr[5] = {50,30,40,20,10};
//     int size = 5, temp;

//     for (int i = 0; i < size; i++) 
//     {
//         printf("%d, ", arr[i]);
//     }
//     printf("\n");

//     for (int i = 0; i < size-1; i++) 
//     {
//         for (int j = 0; j < size-1; j++) 
//         {
//             if (arr[j] > arr[j+1]) 
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     for(int i = 0; i < size; i++) 
//     {
//         printf("%d, ", arr[i]);
//     }

//     return 0;
// }

