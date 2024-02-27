// Operator

// arithmatic
// unary
// #include<stdio.h>
// int main()
// {
//     int a = 10,b;
    // printf("%d\n",a);

    // negative
    // printf("%d\n",-a);
    // Positive 
    // printf("%d\n",+a);

    // inc / dec
    // --a;
    // printf("%d\n",a);
    // ++a;
    // printf("%d\n",a);

    // b = a++;
    // printf("%d, %d",a,b);
//     return 0;
// }


// binary
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n",a + b );
//     printf("%d\n",a - b );
//     printf("%d\n",a * b );
//     printf("%d\n",a / b );
//     printf("%d\n",a % b ); 
//     return 0;
// }


// relationship
// binary
// True = 1 
// False = 0
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n", a<b);
//     printf("%d\n", a>b);
//     printf("%d\n", a<=b);
//     printf("%d\n", a>=b);
//     printf("%d\n", a==b);
//     printf("%d\n", a!=b);
//     return 0;
// }

// ternary

// condition ? TrueCode : FalseCode;

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);

//     age>18 ? printf("you can drive") : printf("you can't drive");
//     return 0;
// }



// logical
// and - && - ziddi 
// biryani     paneer      feel  
//     0           0           0 
//     0           1           0 
//     1           0           0 
//     1           1           1 


// or - || - down to earth
// biryani     paneer      feel  
    // 0           0           0 
    // 0           1           1 
    // 1           0           1 
    // 1           1           1 



// not - ! - ulte khopdi
// 1 ----> 0
// 0 ----> 1 
// not True ----> false 
// not False ----> True 


// assignment

// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     printf("%d\n",a);
    // int b = a;
    // a = 12;
    // a = a + 2;
//     a += 2;
//     printf("%d\n",a);
//     a -= 2;
//     printf("%d\n",a);
//     a *= 2;
//     printf("%d\n",a);
//     a /= 2;
//     printf("%d\n",a);
//     a %= 2;
//     printf("%d\n",a);
//     return 0;
// }

// ======================================

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     c = a + b;
//     printf("%d + %d = %d",a,b,c);
//     return 0;
// }


// Swaping value
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d, %d\n",a,b);
    // *********** using 3rd var********
    // int c;
    // c = a;
    // a = b;
    // b = c;
    // printf("%d, %d\n",a,b);

    // *********** without using 3rd var********

    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("%d, %d\n",a,b);

//     return 0;
// }

// #################################################
// #################### HOMEWORK ###################
// #################################################

// get values from user and print sub 
// get values from user and print multi 
// get values from user and print div
// get values from user and print mod 
// get rad from user and print area of circle

// #include<stdio.h>
// int main()
// {
//     float a = 10, b = 20;
//     // a = 2/3.0 * 1/5.0 + 1 - 2;
//     printf("%f",10/20.0);

//     return 0;
// }