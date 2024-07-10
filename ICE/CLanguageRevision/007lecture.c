//  Linear Search

// #include<stdio.h>
// void main()
// {
//     int a[100],key,i,n,flag=0;
//     printf("Enter array size = ");
//     scanf("%d",&n);
//     printf("Enter elements = \n");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n");
//     printf("Enter a key element which you want to search = ");
//     scanf("%d",&key);
//     for(i=0; i<n; i++)
//     {
//         if(a[i]==key)
//         {
//             printf("value is found on the position %d",i);
//             flag=1;
//             break;
//         }
//     }

//     if(flag==0)
//     {
//         printf("Element not found");
//     }
// }


// Binary Search


// #include<stdio.h>
// void main()
// {
//     int a[100],i,n,temp,flag=0,j;
//     printf("Enter array size = ");
//     scanf("%d",&n);
//     printf("Enter array elements = \n");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n");
//     for(i=0; i<n; i++)
//     {
//         for(j=0; j<n-1; j++)
//         {
//             if(a[j]>=a[j+1])
//             {
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }

//     printf("Sorted Elements are = \n");
//     for(i=0; i<n; i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     printf("\n");
//     int key,low=0,high=n-1,mid;
//     printf("Enter key Element = ");
//     scanf("%d",&key);
//     for(i=0 ; i<n; i++)
//     {
//         mid = (low + high)/2;
//         if(a[mid]==key)
//         {
//             printf("Element %d Found at %d position",key,mid);
//             flag=1;
//             break;
//         }
//         else
//         {
//             if(key>a[mid])
//             {
//                 low = mid + 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//     }

//     if(flag==0)
//     {
//         printf("Element not found");
//     }
// }

