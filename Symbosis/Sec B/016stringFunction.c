// a[20] = {12,43,65,34,65,35,5,34,45};


// b  = 36
// -1 

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {12,32,54,43,32,54,23,13,54,65};
//     int num, index = -1;

//     printf("Enter a number = ");
//     scanf("%d",&num);

//     for(int i = 0 ; i<10; i++)
//     {
//         if(arr[i]==num)
//         {
//             index = i;
//             break;
//         }
//     } 
//     printf("index = %d",index);

//     return 0;
// }


// ==============================================



// a = 10 
// b = 20

// a = a + b // 30
// b = a - b // 10
// a = a - b // 20 





// int a[5] = {20,50,30,10,40};

// a[i]<a[i+1]
// {20,50,30,10,40}
// {20,30,50,10,40}
// {20,30,10,50,40}
// {20,30,10,40,50}


// {20,30,10,40,50}
// {20,10,30,40,50}


// {20,10,30,40,50}

// {10,20,30,40,50}


// a[20] = {12,43,65,34,65,35,5,34,45};


// b  = 36
// -1 

// #include<stdio.h>
// int main()
// {
//     int arr[10] = {12,32,54,43,32,54,23,13,54,65};
//     int num, index = -1;

//     printf("Enter a number = ");
//     scanf("%d",&num);

//     for(int i = 0 ; i<10; i++)
//     {
//         if(arr[i]==num)
//         {
//             index = i;
//             break;
//         }
//     } 
//     printf("index = %d",index);

//     return 0;
// }


// ==============================================



// a = 10 
// b = 20

// a = a + b // 30
// b = a - b // 10
// a = a - b // 20 





// int a[5] = {20,50,30,10,40};

// a[i]>a[i+1]
// {20,50,30,10,40}
// {20,30,50,10,40}
// {20,30,10,50,40}
// {20,30,10,40,50}


// {20,30,10,40,50}
// {20,10,30,40,50}


// {20,10,30,40,50}

// {10,20,30,40,50}

#include <stdio.h>
int main() 
{
    int arr[5] = {20,50,30,10,40};
    int n = 5, temp;

    for (int i = 0; i < n; i++) 
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n-1; i++) 
    {
        for (int j = 0; j < n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}


