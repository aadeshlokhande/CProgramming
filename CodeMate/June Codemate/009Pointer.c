// POINTER - *, &, %p

// * ---> pointer
// & ---> address assign
// %p ---> formate specifier (hexa-decimal)

// binary ---> 2, 0-1
// octal --> 8 ---> 0-7
// decimal ---> 10 ---> 0-9
// hexa-decimal ----> 16 ---> 0-9, a-f





// #include<stdio.h>
// int main()
// {
//     int sneha = 21;
//     int *saujanya;
//     saujanya = &sneha;

//     printf("value of sneha = %d\n",sneha);
//     printf("address of sneha = %p\n",&sneha);

//     printf("value of saujanya = %p\n",saujanya);
//     printf("address of saujanya = %p\n",&saujanya);
//     printf("value of *saujanya = %d\n",*saujanya);

//     int **police;
//     police = &saujanya;
//     printf("value of police = %p\n",police);
//     printf("address of police = %p\n",&police);
//     printf("value of *police = %p\n",*police);
//     printf("value of **police = %d\n",**police);

//     return 0;
// }




// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// **************** Call by value & call by referance ****************
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=



// #include<stdio.h>
// void getData(int *ptr)
// {
//     printf("Enter a number = ");
//     scanf("%d",&*ptr);
// }

// int main()
// {
//     int a;
//     getData(&a);
//     printf("a = %d",a);
//     return 0;
// }



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }


// int main()
// {
//     int a = 10; 
//     int b = 20; 
//     printf("a = %d, b = %d\n",a,b);
//     swap(&a,&b);
//     printf("a = %d, b = %d\n",a,b);
    
//     return 0;
// }