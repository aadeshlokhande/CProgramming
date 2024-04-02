#include<stdio.h>
int main()
{
    int a = 445, var = 0,b;
    while(a>0)
    {
        b = a % 10;
        var = var * 10 + b ;
        a = a / 10 ;
    }
    if(a==var)
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }
    return 0;
}