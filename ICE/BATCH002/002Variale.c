// Variable - Cantainers

// a = 98237492384
// b = 9827394782934
// c = 927384927438923
// d = 92734938934
// e = 928743682743


// vari - able
// a = 10 
// a = 20 
// a = 30 

// DataType
// int  - %d - 12,23,54,0,-34,-325
// float - %f - 5.5, 5.2, 1.5, 3.14
// char - %c - 's','S','9','*', 

// identifier 

// a = 98379482739
// aadeshNum = 97823948723
// aadeshAge = 96

// rules
// 1) we cant start identitfier name with number
// 5star, 21rollnumber, 2sisters, 4brothers, 7cities this are not allowed
// 2) we can use underscore (_)
// first_name, roll_number, _name, name_
// 3) identifiers are case sensitive
// a = 10
// A = 20
// age = 10
// Age = 20 
// AGE = 30 
// 4) we cant use keywords as a identifier
// return = 10 this is not allowed


// =================================================

// #include<stdio.h>
// int main()
// {
//     // datatype variableName;
//     // int a;

//     // variableName = value;
//     // a = 10;

//     // datatype variableName = value;
//     int a = 100;
//     float b = 4.345;
//     char c = 'P';

//     printf("a = %d\n",a);
//     printf("b = %f\n",b);
//     printf("c = %c\n",c);
// }



// ====================================
// scanf()
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age= ");
    scanf("%d",&age);
    printf("my age is %d year old.",age);
}