// int a[10] = {12,23,34,45,56,67,78,89,90,21};
// num = 45;


// index = 3
// index = -1


// linear search
// #include<stdio.h>
// int main()
// {
//     int a[10] = {12,23,34,45,56,67,78,89,90,21};
//     int num, index = -1;

//     printf("Enter a number = ");
//     scanf("%d",&num);

//     for(int i = 0; i<10; i++)
//     {
//         if(a[i]==num)
//         {
//             index = i;
//         }
//     }
//     printf("index = %d",index);

//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// prn ---> 85 84
// a[5] = {50,30,40,10,20};
// int temp;
// size = 5
// i --> 0, size-1
// j --> 0, size-1
//     if(a[j] > a[j+1])
//     {
//         temp = a[j];
//         a[j] = a[j+1];
//         a[j+1] = temp;
//     }



// a[j] > a[j+1]
// {50,30,40,10,20}
// {30,50,40,10,20}
// {30,40,50,10,20}
// {30,40,10,50,20}
// {30,40,10,20,50}


// {30,40,10,20,50}
// {30,10,40,20,50}
// {30,10,20,40,50}

// {30,10,20,40,50}
// {10,30,20,40,50}
// {10,20,30,40,50}

// {10,20,30,40,50}

// a[5] = {50,30,40,10,20};
// int temp;
// size = 5
// i --> 0, size-1
// j --> 0, size-1
//     if(a[j] > a[j+1])
//     {
//         temp = a[j];
//         a[j] = a[j+1];
//         a[j+1] = temp;
//     }


#include<stdio.h>
int main()
{
    int a[5] = {50,30,40,10,20};
    int temp, size = 5;

    for(int i = 0; i<5; i++)
    {
        printf("%d ",a[i]);
    }

    for(int i = 0; i<size-1; i++)
    {
        for(int j = 0 ; j<size-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}