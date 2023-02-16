// #include<stdio.h>
// void table(int a)
// {
//     static int num = 10;
//     if(num>=1)
//     {
//         printf("%d\n",num*a);
//         --num;
//         table(a);
//     }
// }


// int main()
// {
//     table(5);
// }





// global 
// local
// static 
// dynamic 


// // global & local
// #include<stdio.h>

// int a = 30;

// int main()
// {
//     // int a = 10;
//     {
//         // int a = 20;
//         printf("a = %d\n",a);
//     }
//     // printf("a = %d\n",a);


// }




// ---------------------------------

// #include<stdio.h>
// int main()
// {
//     int a = 7,b=1;
//     while(b<=10)
//     {
//         printf("%d\n",a*b);
//         ++b;
//     }
// }