#include<stdio.h>
int main()
{
    char a;
    printf("Enter a char = ");
    scanf("%c",&a);
    
    if(a>='0' && a <='9')
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}