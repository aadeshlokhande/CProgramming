// Function --->  A block of code which will call from the main function
//                function will always create outside of the main().

// printf()
// scanf()
// main()

// int ---> return type 
// int main() --> return 0;
// void main() --> we cannot write return here

// int/void function_name(arguments or parameters)
// {
//     code ; 
// }

// types of functions 
// 1) with arguments and with return .
// 2) without arguments but with return.
// 3) without arguments and without return
// 4) with arguments but without return


// with arguments and with return .

// #include<stdio.h>
// int Addition(int x , int y)
// {
//     int z;
//     z = x + y;
//     return z;
// }

// int main()
// {
//     int a,b,sum;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     sum = Addition(a,b);
//     printf("sum is = %d",sum);
//     return 0;
// }




// without arguments but with return.

// #include<stdio.h>
// int Addition()
// {
//     int a,b,z;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     z = a + b;
//     return z;
// }

// int main()
// {
//     int sum;
//     sum = Addition();
//     printf("sum is = %d",sum);
//     return 0;
// }



// without arguments and without return

// #include<stdio.h>
// void Addition()
// {
//     int a,b,sum;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     sum = a + b;
//     printf("Sum = %d",sum);
// }

// int main()
// {
    
//     Addition();
   
//     return 0;
// }


// with arguments but without return

// #include<stdio.h>
// void Addition(int x , int y)
// {
//     int sum;
//     sum = x + y;
//     printf("sum = %d",sum);
// }

// int main()
// {
//     int a,b;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     Addition(a,b);

   
//     return 0;
// }


