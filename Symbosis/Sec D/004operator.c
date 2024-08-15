// scanf()

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d", &a);


//     printf("a = %d",a);
//     return 0;
// }



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// operator

// arithmatic 
// unary 
// #include<stdio.h>
// int main()
// {
//     int a = 10,b;
//     printf("a = %d\n",a);
    // printf("a = %d\n",-a);
    // printf("a = %d\n",+a);

    // --a;
    // --a;
    // printf("a = %d\n",a);

    // b = a++;
    // b = ++a;
    // printf("a = %d, b = %d\n",a,b);

//     return 0;
// }

// binary
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n",a + b);
//     printf("%d\n",a - b);
//     printf("%d\n",a * b);
//     printf("%d\n",a / b);
//     printf("%d\n",a % b);
//     return 0;
// }

// relationship
// binary
// #include<stdio.h>
// int main()
// {
//     int a = 10 , b = 20;
//     printf("%d\n", a < b);
//     printf("%d\n", a > b);
//     printf("%d\n", a <= b);
//     printf("%d\n", a >= b);
//     printf("%d\n", a == b);
//     printf("%d\n", a != b);
//     return 0;
// }

// ternary
// (condition) ? TrueCode : FalseCode;
// #include<stdio.h>
// int main()
// {
//     int age = 12;
//     age>18 ? printf("Hello") : printf("bye bye");

//     return 0;
// }


// logical
// and ----> && ----> ziddi 
// dalchawal       vangyachi bhaji         feel 
//     0                   0               0 
//     0                   1               0 
//     1                   0               0 
//     1                   1               1 


// or -----> || -----> down to earth
// dalchawal       vangyachi bhaji         feel 
    // 0                   0                   0 
    // 0                   1                   1 
    // 1                   0                   1 
    // 1                   1                   1 


// not -----> ! -----> ulte khopdi 
// 1 -----> 0 
// 0 -----> 1 

// not true ----> false 
// not false ----> true 


// assignment

// a = 10 
// b = a 

// a = 10 
// // a = 12 
// a = a + 2 
// a += 2 
// a -= 2 
// a *= 2 
// a /= 2 
// a %= 2 



// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     printf("a = %d\n",a); //  10
//     // a = 12 
//     // a = a + 2 
//     a += 2 ;
//     printf("a = %d\n",a); // 12
//     a -= 2 ;
//     printf("a = %d\n",a); // 8
//     a *= 2 ;
//     printf("a = %d\n",a); // 20
//     a /= 2 ;
//     printf("a = %d\n",a); // 5
//     a %= 2 ;
//     printf("a = %d\n",a); // 0
//     return 0;
// }


// ==========================================

// #include<stdio.h>
// int main()
// {
//     int a,b,ans;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);
//     ans = a + b;
//     // printf("ans = %d\n",ans);
//     printf("%d + %d = %d\n",a,b,ans);

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// get rad from user and print area of circle



#include<stdio.h>
int main()
{
    int rad;
    float ans;
    printf("Enter a rad = ");
    scanf("%d",&rad);
    ans = 3.14 * rad * rad;
    printf("area of circle = %f",ans);
    return 0;
}










// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// Aadesh Lokhande
// 705 8232 826