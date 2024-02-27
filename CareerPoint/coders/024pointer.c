// pointer - (*,&)

// hexadecimal - 0x-----

// #include<stdio.h>
// int main()
// {
//     int var = 10;
//     int *ptr;
//     ptr = &var;

// }


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

    *sachin = 100;
    printf("age of priya = %d\n",priya);
}

