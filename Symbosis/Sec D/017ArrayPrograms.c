// a[10] = {21,34,45,56,67,78,98,76,65,54};
// num = 670;

// index = 4 
// index = -1 


// #include<stdio.h>
// int main()
// {
//     int a[10] = {21,34,45,56,67,78,98,56,65,54};
//     int num,index = -1;

//     printf("Enter a number = ");
//     scanf("%d",&num);

//     for(int i = 0; i<10; i++)
//     {
//         if(a[i] == num)
//         {
//             index = i;
//             break;
//         }
//     }
//     printf("index = %d",index);
//     return 0;
// }



// ===============================================
// int a[5] = {30,20,50,10,40};



// a = 10 
// b = 20 

// a[i]>a[i+1]

// a[5] = {30,20,50,10,40}
// size = 5
// a[5] = {20,30,50,10,40}
// a[5] = {20,30,10,50,40}
// a[5] = {20,30,10,40,50}


// a[5] = {20,30,10,40,50}
// a[5] = {20,10,30,40,50}

// a[5] = {20,10,30,40,50}

// a[5] = {10,20,30,40,50}

#include <stdio.h>
int main() 
{
    int arr[5] = {30,20,50,10,40};
    int size = 5, temp;

    for (int i = 0; i < size; i++) 
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size-1; i++) 
    {
        for (int j = 0; j < size-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}




