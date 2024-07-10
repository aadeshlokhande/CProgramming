#include<stdio.h>
void main()
{
    int a[100],key,i,n,flag=0;
    printf("Enter array size = ");
    scanf("%d",&n);
    printf("Enter elements = \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("Enter a key element which you want to search = ");
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("value is found on the position %d",i);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("Element not found");
    }
}