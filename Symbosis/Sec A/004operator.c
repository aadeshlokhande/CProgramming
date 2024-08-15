// #include <stdio.h>

// int main()
// {
//     int a ;
//     printf("enter a number = ");
//     scanf("%d",&a);
//     printf("a = %d",a);
//     return 0;
// }

// ========================================

// operator
// 10 + 20 

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
    // ++a;
    // a--;
    // a++;
//     b = a++;
//     printf("a = %d, b = %d\n",a,b);
// }

// binary
// #include<stdio.h>
// int main()
// {
//     int a = 10 ,b= 20;
//     printf("%d\n", a + b);
//     printf("%d\n", a - b);
//     printf("%d\n", a * b);
//     printf("%d\n", a / b);
//     printf("%d\n", a % b);
//     return 0;
// }



// relational
// binary

// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n", a < b);
//     printf("%d\n", a > b);
//     printf("%d\n", a <= b);
//     printf("%d\n", a >= b);
//     printf("%d\n", a == b);
//     printf("%d\n", a != b);
//     return 0;
// }



// ternary

// (condition) ? trueCode : falseCode;
// #include<stdio.h>
// int main()
// {
//     int age = 12;
//     age>18 ? printf("hello") : printf("bye bye");
//     return 0;
// }




// logical
// and - &&
// cond && cond -----> 

// or - || 
// cond || cond ----> 

// not - !
// !(condition) 

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// assignment

// a = 10 
// b = a 

// a = 10 
// // a = 12 
// // a = a + 2 
// a += 2 
// a -= 2 
// a *= 2 
// a /= 2 
// a %= 2 


// #include<stdio.h>
// int main()
// {
//     int a = 10 ;
//     printf("a = %d\n",a); // 10

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

// ===============================================



// #include<stdio.h>
// int main()
// {
//     int a,b,ans;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);
//     ans = a + b;
//     printf("%d\n",ans);
    
//     return 0;
// }

// ===============================

// get rad from user and print area of circle






#include<stdio.h>
int main()
{
    int rad;
    float ans;
    printf("Enter a rad = ");
    scanf("%d",&rad);

    ans = 3.14*rad*rad;
    printf("ans = %f",ans);
    return 0;
}