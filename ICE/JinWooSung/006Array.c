// **************** Array ****************

// variable
// for loop

// syntax

// datatype arrayName[size];
// int age[9];

// arrayName[index] = value;
// age[3] = 44;

// age[3] + 5 = 49 
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// datatype arrayName[size] = {values}
// int age[5] = {12,23,54,76,98};

// #include<stdio.h>
// int main()
// {
//     int age[9] = {10,20,30,40,50,60,70,80,90};
    // printf("%d",age[5]+3);
    
    // for(int i = 0; i<9; i++)
    // {        
    //     printf("age[%d] = %d\n",i,age[i]);
    // }

//     for(int i = 8; i>=0; i--)
//     {        
//         printf("age[%d] = %d\n",i,age[i]);
//     }

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// #include<stdio.h>
// int main()
// {
//     int age[10];
    // age[5] = 77;
    // age[2] = 99;
    // printf("%d",age[5]);

    // printf("Enter a number = ");
    // scanf("%d",&age[4]);
    
    // printf("value = %d",age[4]);

//     for(int i = 0; i<10; i++)
//     {
//         printf("Enter a value of age[%d] = ",i);
//         scanf("%d",&age[i]);
//     }

//     for(int i = 0; i<10; i++)
//     {
//         printf("value of age[%d] = %d\n",i,age[i]);
//     }

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// **************** searching ****************
// linear search ---> unsorted array

// #include<stdio.h>
// int main()
// {
//     int age[10000000] = {12,32,43,54,66,45,65,64,43,24};
//     int num = 64;
//     int index = -1;
//     for(int i = 0; i<10; i++)
//     {
//         if(num==age[i])
//         {
//             index = i;
//             break;
//         }
//     }
//     // printf("%d",index);
//     if(index == -1)
//     {
//         printf("value not found\n");
//     }
//     else
//     {
//         printf("your number is in %d index",index);
//     }
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// Binary search ---> sorted array

// arr = 1,2,3,4,5,6,7,8,9,11,12,33,44,55,66,77
// num = 44
// len = 16
// mid = len / 2 = 8 

// #include<stdio.h>
// int main()
// {
//     int arr[6] = {10,20,30,40,50,60};
//     int n = 6;
//     int target = 40;

//     return 0;
// }





// #################################################
// #################### HOMEWORK ###################
// #################################################

// min  -----
// max  -----
// avrg  -----
// total number of even number
// count odd numbers 
// count all age > 18 and print 
// linear search


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// total sum?

// #include<stdio.h>
// int main()
// {
//     int nums[5] = {2,3,4,5,8};
//     int totalsum = 0;
//     for(int i=0; i<5; i++)
//     {
//         // totalsum = totalsum + nums[i]; 
//         totalsum += nums[i]; 
//     }
//     printf("total Sum = %f\n", totalsum/5.0);
//     return 0;
// }



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// #include<stdio.h>
// int main()
// {
//     int numbers[10] = {10,20,50,30,60,40,30,20,80,44};
//     int max = numbers[0];
//     for(int i = 0; i<10; i++)
//     {
//         if(max < numbers[i])
//         {
//             max = numbers[i];
//         }
//     }
//     printf("max value = %d\n",max);
//     return 0;
// }


// total even numbers

// #include<stdio.h>
// int main()
// {
//     int numbers[10] = {12,23,43,65,45,34,54,65,45,34};
//     int count = 0;

//     for(int i = 0; i<10; i++)
//     {
//         if(numbers[i] % 2 == 0)
//         {
//             ++count;
//         }
//     }

//     printf("total even numbers = %d\n",count);

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// #include <stdio.h>
// int main()
// {
//     int age[10] = {1,2,13,4,15,62,7,28,92,10};
//     int count = 0;
//     for (int i=0; i<10; i++)
//     {
//         if(age[i] > 18)
//         {
//             count++;
//         }
//     }
//     printf("The age is greater than 18 =  %d\n", count);
//     return 0;
// }