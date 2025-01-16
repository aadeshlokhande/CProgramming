// Array 

// datatype arrayName[size];

// #include<stdio.h>
// int main()
// {
    // int ary[5];
    // ary[1] = 10;
    // printf("%d\n",ary[1]);
    // ary[3] = 30;
    // printf("%d\n",ary[3]);

    // int ary[5] = {12,43,64,76,47};
    // printf("%d\n",ary[0]);
    // for(int i = 0; i<5; i++)
    // {
    //     printf("ary[%d] = %d\n",i,ary[i]);
    // }

    // int ary[5];
    // printf("Enter a number = ");
    // scanf("%d",&ary[3]);

    // printf("%d\n",ary[3]);

    // for(int i = 0; i<5; i++)
    // {
    //     printf("Enter a number =");
    //     scanf("%d",&ary[i]);
    // }

//     for(int i = 0; i<5; i++)
//     {
//         printf("ary[%d] = %d\n",i,ary[i]);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int num[10];
//     for(int i = 0; i<10; i++)
//     {
//         printf("Enter a number =");
//         scanf("%d",&num[i]);
//     }

//     for(int i = 0; i<10; i++)
//     {
//         if(num[i] % 2 == 0)
//         {
//             printf("%d\n",num[i]);
//         }
//     }
// }


// ____________________HomeWork_____________________
// get 10 values from user and print in reverse order 
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     for(int t = 0; t<10; t++)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a[t]);
//     }
//     for(int t = 9; t>=0; t--)
//     {
//         printf("%d\n",a[t]);
//     }
// }

// get 10 values from user and print total sum 
// #include<stdio.h>
// int main()
// {
//     int a[10];
//     int sum = 0;
    
//     for(int i = 0; i<10; i++)
//     {
//         printf("Enter the value of a[%d] = ",i);
//         scanf("%d",&a[i]);
//     }

//     for(int i = 0; i<10; i++)
//     {
//         sum = sum + a[i];
//     }

//     printf("Totol sum = %d\n",sum);

// }




// get 10 values from user and print number of odd number 

// #include<stdio.h>
// int main()
// {
//     int num[10];
//     int odd = 0;
//     for(int i = 0; i<10; i++)
//     {
//         printf("Enter a number =");
//         scanf("%d",&num[i]);
//     }

//     for(int i = 0; i<10; i++)
//     {
//         if(num[i] % 2 == 1)
//         {
//             ++odd;
//         }
//     }

//     printf("odd number = %d\n",odd);
// }



// #include<stdio.h>
// int main()
// {
//     int num[10];
//     for(int i = 0; i<10; i++)
//     {
//         printf("Enter a number =");
//         scanf("%d",&num[i]);
//     }

//     for(int i = 0; i<10; i++)
//     {
//         if(num[i] % 2 == 1)
//         {
//             printf("%d\n",num[i]);
//         }
//     }
// }