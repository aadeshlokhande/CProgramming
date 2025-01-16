// call by value and call by referance

// #include<stdio.h>
// void swap(int *a , int *b)
// {
//     int c;
//     c = *a;
//     *a = *b;
//     *b = c;
// }
// int main()
// {
//     int a = 10,  b = 20;
//     printf("a = %d and b = %d\n", a,b);
//     swap(&a,&b);
//     printf("a = %d and b = %d\n", a,b);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=



// #include<stdio.h>
// void getInt(int *ptr)
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     *ptr = num;
// }

// int main()
// {
//     int var1, var2;
//     getInt(&var1);
//     getInt(&var2);
//     printf(" %d", var1+var2);
//     return 0;
// }