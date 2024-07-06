// Array 
// is a collection data having same data type

// array_name/variable[array_size];

// int a[5] = {1,2,3,4,5,6};

// #include<stdio.h>
// int main()
// {
//     int a[5] = {1,2,3,4,5,6};
//     printf("a[5] = %d",a[5]);
//     return 0;
// }

// one dimensional ---> int a[5]; 
// two dimensional ---> int b[5][5];

// #include<stdio.h>
// int main()
// {
//     int a[100],i,n;

//     printf("Enter array size = ");  //--> array input from user
//     scanf("%d",&n);

//     printf("Enter the numbers\n");
//     for(i=0; i<=n-1; i++)
//     {
//         scanf("%d",&a[i]);  //----> input process.
//     }
//     printf("\n");
//     for(i=0; i<=n-1; i++)
//     {
//         printf("%d\n",a[i]);  //----> output process.
//     }    

//     return 0;
// }


// Q. take 2 array input from user , and print there addition.
// #include<stdio.h>
// int main()
// {
//     int a[5],b[5],c[5],i;
//     printf("Enter the elements of a = \n");
//     for(i=0; i<=4; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n");

//     printf("Enter the elements for b = \n");
//     for(i=0; i<=4; i++)
//     {
//         scanf("%d",&b[i]);
//     }
//     printf("\n");

//     for(i=0; i<=4; i++)
//     {
//         c[i] = a[i] + b[i];
//     }

//     printf("Addition of two array is\n");
//     for(i=0; i<=4; i++)
//     {
//         printf("%d\n",c[i]);
//     }

//     return 0;
// }

// Q. take a array input and check which one is largest.
// a[10] = {1,5,3,235,35,544,31,45,6,90}
#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("Enter the array elements = \n");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];
    for(i=1; i<=9; i++)
    {
        if(max<=a[i])
        {
            max = a[i];
        }
    }
    printf("\n");
    printf("Largest value is = %d",max);
    return 0;
}