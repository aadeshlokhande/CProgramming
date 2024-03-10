// // #include<stdio.h>
// // int main()
// // {
// //     int i;
// //     for(i = 1; i<=10; i++ )
// //     {
// //         printf("%d\n",i);
// //     }
// //     return 0;
// // }


// // #include<stdio.h>
// // int main()
// // {
// //     for(int i = 10; i>=1; i--)
// //     {
// //         printf("%d\n",i);
// //     }
// //     return 0;
// // }


// // #include<stdio.h>
// // int main()
// // {
// //     int a = 1;
// //     while (a<=10)
// //     {
// //         printf("%d \n",a);
// //         a++;
// //     }

// //     return 0;
// // }



// #include<stdio.h>
// int main()
// {
//     int a[5] = {4,2,5,1,3};
//     for(int i = 0; i<5; i++)
//     {
//         for(int j = 0; j<5; j++)
//         {
//             if(a[j] > a[j+1])
//             {
//                 int temp;
//                 temp = a[j+1];
//                 a[j+1] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for(int i = 0; i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }