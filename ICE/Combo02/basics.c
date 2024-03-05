// #include<stdio.h>
// int main() {
//   int a[10][10], A[10][10], r, c;
  
//   printf("Enter rows and columns: \n");
//   scanf("%d %d", &r, &c);
  
//   printf("Enter matrix elements:\n");
  
//   for (int i = 1; i <=r; i++)
//   {
//    for (int j = 1; j <=c; j++) 
//     {
//       printf("Enter element a%d%d: \n", i , j);
//       scanf("%d", &a[i][j]);
//     }
//   }
  
//   printf("Entered matrix: \n");
  
//   for (int i = 1; i <=r; i++)
//    {
//     for (int j = 1; j <= c; j++) 
//      {
//       printf("%d  ", a[i][j]);
     
//       if (j == c)
//       {
//        printf("\n");
//       }
//      } 
//    }

//   for (int i = 1; i <= r; i++)
//   {
//    for (int j = 1; j <= c; j++) 
//    {
//     A[j][i] = a[i][j];
//    }
//   }
  
//   printf("\nTranspose of the matrix:\n");
  
//   for (int i = 1; i <=c; i++)
//   {
//    for (int j = 1; j <=r; j++) 
//     {
//      printf("%d  ", A[i][j]);
     
//     if (j == r)
//     {
//     printf("\n");
//     }
//    } 
//   }
//   return 0;
// }


// #include <stdio.h>
// int main() {
//   int a[10][10], A[10][10], r, c;
  
//   printf("Enter rows and columns: \n");
//   scanf("%d %d", &r, &c);
  
//   printf("Enter matrix elements:\n");
  
//   for (int i = 1; i <=r; i++)
//   {
//    for (int j = 1; j <=c; j++) 
//     {
//       printf("Enter element a%d%d: \n", i , j);
//       scanf("%d", &a[i][j]);
//     }
//   }
  
//   printf("Entered matrix: \n");
  
//   for (int i = 1; i <=r; i++)
//    {
//     for (int j = 1; j <= c; j++) 
//      {
//       printf("%d  ", a[i][j]);
     
//       if (j == c)
//       {
//        printf("\n");
//       }
//      } 
//    }

//   for (int i = 1; i <= r; i++)
//   {
//    for (int j = 1; j <= c; j++) 
//    {
//     A[j][i] = a[i][j];
//    }
//   }
  
//   printf("\nTranspose of the matrix:\n");
  
//   for (int i = 1; i <=c; i++)
//   {
//    for (int j = 1; j <=r; j++) 
//     {
//      printf("%d  ", A[i][j]);
     
//     if (j == r)
//     {
//     printf("\n");
//     }
//    } 
//   }
//   return 0;
// }

// ===========================
#include<stdio.h>
int main()
{
    int num = 2,ans = 1;
    for(int i = 1; i<=10;i++)
    {
        for(int j=1; j<=i; j++)
        {
            ans = ans*num;
        }
        printf("%d\n",ans);
        ans = 1;
    }
}

