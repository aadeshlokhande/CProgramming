// 123 ---> 321

// 121 ---> 121
// 12321

// a = 123 = 12, 1
// b = 0 

// {
// r = a % 10 = 3, 2 , 1 
// b = (b*10) + r = 3 ,32 , 321
// a = a/10
// }

// a==b 
// yes 
// no 


#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
   
    while(n>0)
    {
        r = n%10;
        sum = (sum *10)+ r;
        n = n /10;
    }

    printf("rev = %d",sum);
    return 0;
}

235-
225
215