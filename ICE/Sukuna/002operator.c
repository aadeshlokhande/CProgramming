// Operator

// arithmatic
// unary 
// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     printf("%d\n",a);
//     printf("%d\n",-a);
//     printf("%d\n",+a);
//     ++a;
//     --a;
//     printf("%d\n",a);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 10, b;
//     // b = ++a;
//     b = a++;
//     printf("a = %d, b = %d\n",a,b);
//     return 0;
// }

// binary
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n", a + b);
//     printf("%d\n", a - b);
//     printf("%d\n", a * b);
//     printf("%d\n", a / b);
//     printf("%d\n", a % b);
//     return 0;
// }

// relationship
// binary 
// true = 1 ;
// false = 0;
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n", a < b ); // 1
//     printf("%d\n", a > b );  // 0
//     printf("%d\n", a <= b ); // 1
//     printf("%d\n", a >= b ); // 0 
//     printf("%d\n", a == b ); // 0
//     printf("%d\n", a != b ); // 1
//     return 0;
// }

// ternary
// condition ? trueCode : falseCode;
// 10 < 20 ? print('hello') : print("bye bye");
// #include<stdio.h>
// int main()
// {
    // int age;
    // printf("Enter a age = ");
    // scanf("%d",&age);
    // (age>18) ? printf("Hello") : printf("bye bye");

    // int age, a;
    // printf("Enter a age = ");
    // scanf("%d",&age);
    // a = (age>10) ? 100 : 200;
    // printf("a = %d",a);
    // return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// logical 
// and - ziddi operator - &&
// panipuri        vadapav     feel 
//     0               0           0 
//     0               1           0 
//     1               0           0 
//     1               1           1   


// or - gareeb manacha manus - ||
// panipuri        vadapav     feel 
    // 0               0           0 
    // 0               1           1 
    // 1               0           1 
    // 1               1           1


// not - ulte khopdi - ! 
// 0 ----> 1 
// 1 ----> 0 
// not flase = true 
// not true =  false 





// assignment
// a = 10 
// b = a 

// a = 10 
// a = 12 
// a = a + 2 
// a += 2 
// a -= 2 
// a *= 2 
// a /= 2 
// a %= 2 


// ===============================

#include<stdio.h>
int main()
{
    int a,b,c;
    // printf("enter a and b = ");
    // scanf("%d%d", &a, &b);
    printf("enter a number = ");
    scanf("%d",&a);
    printf("enter a number = ");
    scanf("%d",&b);
    c = a + b;
    printf("%d + %d = %d", a,b,c);
    return 0;
}