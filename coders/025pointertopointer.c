// pointer - (*,&)
// bi - 0 1 
// oc - 0 7 
// dec - 0 9 
// hexadec - 0 15

// int - %d 
// hex = %p
#include<stdio.h>
int main()
{
    int priya = 21;
    int *sachin;
    sachin = &priya;

    printf("age of priya = %d\n",priya);
    printf("Address of priya = %p\n",&priya);
    printf("value of sachin = %p\n",sachin);
    printf("address of sachin = %p\n",&sachin);
    printf("value of *sachin = %d\n",*sachin);

    int **police;
    police = &sachin;

    printf("value of police = %p\n",police);
    printf("address of police = %p\n",&police);
    printf("value of *police = %p\n",*police);
    printf("value of **police = %d\n",**police);

    int ***IAS;
    IAS = &police;
    printf("value of IAS = %p\n",IAS);
    printf("address of IAS = %p\n",&IAS);
    printf("value of *IAS = %p\n",*IAS);
    printf("value of **IAS = %p\n",**IAS);
    printf("value of ***IAS = %d\n",***IAS);
}














