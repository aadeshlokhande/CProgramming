// 123 ----> 321
// 121 ----> 121

#include<stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("Enter a number = ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = (sum *10)+ r;
        n = n /10;
    }

    if(sum==temp)
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }
    return 0;
}


// b = 0
// a = 134

// r = a % 10
// a = a/10 
// b = (b *10) + r

// if (a==b)
// 121----> 121
// 123--->321
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// 0 1 1 2 3 5 8 13 21....

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// a = 432 / 2 = 
// 2...n
// 2...n
// a = 0
// 2 3 4 5 
// 2 3 4 5 
// a = 1 

