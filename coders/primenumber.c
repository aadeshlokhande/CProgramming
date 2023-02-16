// prime number 
// 70 
// 35 


// prime number 
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);

//     int count = 0;
//     for(int i=1 ; i<=(a/2); i++)
//     {
//         for(int j = 1 ; j <= (a/2); j++)
//         {
//             if(i*j==a)
//             {
//                 ++count;
//             }
//         }
//     }

//     if(count==0)
//     {
//         printf("Prime number\n");
//     }
//     else 
//     {
//         printf("Not a prime number\n");
//     }
// }




// prime number 
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     int count;

//     for(int k = 1; k<=a; k++)
//     {
//         count = 0;
//         for(int i=1 ; i<=(k/2); i++)
//         {
//             for(int j = 1 ; j <= (k/2); j++)
//             {
//                 if(i*j==k)
//                 {
//                     ++count;
//                 }
//             }
//         }
//         if(count==0)
//         {
//             printf("prime = %d\n",k);
//         }
//     }
// }

// -------------------------------
// factors 
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Factors of %d are ",a);
//     for(int i = 1; i<=a; i++)
//     {
//         if(a%i==0)
//         {
//             printf("%d ",i);
//         }
//     }
// } 