// c - compiler
// #include <stdio.h>
// int main()
// {
//     // printing hello World
//     printf("Hello, World!");
//     return 12;
// }


// --------------------------------
// 20 - 25 %

// #include - preprocessing command
// stdio - library i/o 
// .h - extension - .pdf ,mp3, mp4, .mkv, .ppt, .apk
// int - return type 
// main() - function - 2000 lines - 1500 main()
// {} - scope

// printf() - print data - "string"
// "Hello, World" - collection of char 
// return - keyword
// 0 - value


// --------------------------------



// whitespaces - blankshapce

// comments
// single line 
/* multi 
line*/

// keywords - reserve words - 32 keywords

// auto	break	case	char	const	continue	default	do
// double	else	enum	extern	float	for	goto	if
// int	long	register	return	short	signed	sizeof	static
// struct	switch	typedef	union	unsigned	void	volatile	while


// ; - semicolon - full stop - statement terminator

// tokens - smallest elements


// printf
// (
//     "Hello, World!"
//     )
//     ;
    
// --------------------------------
// // Variable - cantainer
// a = 123234234
// b = 2342534535
// c = 345345345345
// d = 345345345345
// e = 345345345345

// abc = 10 
// abc = 20 
// abc = 30 

// --------------------------------
// datatype

// int  - %d -  10,23,45,36,0,-34,-754
// float- %f - -3.14, 3.5, 5.9, 1.5 
// char - %c - 'a','b', 'c', 'A', '&', '8'

// // --------------------------------
// // identifier

// a - 98374593874
// aadeshnumber = 857394893
// aadeshAge = 85 


// // rules to create identifier
// 1) we cant start identifier name with number 
// 5star, 7brothers, 21rollnumber - this are not allowed

// 2) we can use underscore (_)
// shruti_raut, roll_number, first_name, aadesh_age, _name, name_

// 3) we can use letters numbers and underscore only
// shruti_raut, roll_number21, firstname_324, 

// 4) case sensetive
// A = 10 
// a = 20 

// age = 10 
// Age = 20 
// AGE = 30

// 5) we can't use keywords as identifier
// Return = 10 

// --------------------------------

// escap char 
// \n - newline
// \t - horizontal tab 

// #include<stdio.h>
// int main()
// {
//     // datatype VariableName;
//     // int a;
    
//     // VariableName = value;
//     // a = 10;
    
//     // datatype VariableName = value;
//     int a = 120;
//     float b = 3.14;
//     char c = 't';
    
//     printf("a = %d\n",a);
//     printf("b = %f\n",b);
//     printf("c = %c\n",c);
    
// }


// scanf()

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d", &a);
//     printf("a = %d",a);
    
// }
// --------------------------------

// operator

// arithmatic
// unary - work with one value
// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     printf("a = %d\n",a);
//     // printf("a = %d\n",-a);      // negative
//     // printf("a = %d\n",+a);      // positive
    
//     ++a;
//     printf("a = %d\n",a);
    
//     --a;
//     printf("a = %d\n",a);
// }


// binary - work with 2 value
// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n",a + b);
//     printf("%d\n",a - b);
//     printf("%d\n",a * b);
//     printf("%d\n",a / b);
//     printf("%d\n",a % b); 
// }


// relationship
// TRUE = 1
// FALSE = 0 

// #include<stdio.h>
// int main()
// {
//     int a = 10, b = 20;
//     printf("%d\n", a < b);          // 1 
//     printf("%d\n", a > b);          // 0 
//     printf("%d\n", a <= b);         // 1 
//     printf("%d\n", a >= b);         // 0 
//     printf("%d\n", a == b);         // 0 
//     printf("%d\n", a != b);         // 1 
// }



// logical
// and - && - ziddi operator
// gupchup         icecream        feel
//     0               0           0 
//     0               1           0 
//     1               0           0 
//     1               1           1 

// or - || - gareeb manacha manus
// gupchup         icecream        feel
    // 0               0               0 
    // 0               1               1 
    // 1               0               1 
    // 1               1               1 



// not - ! - ulte khopdiwala
// 0 ----> 1 
// 1 ----> 0 


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
//     int a = 10 ;
//     printf("%d\n",a);
//     // a = 12
//     // a = a + 2 
    
//     a += 2;             // 12 
//     printf("%d\n",a);
//     a -= 2;             // 10 
//     printf("%d\n",a);
//     a *= 2;             // 20 
//     printf("%d\n",a);
//     a /= 2;             // 10 
//     printf("%d\n",a);
//     a %= 2;             // 0
//     printf("%d\n",a);
// }



// --------------HOMEWORK------------------
// get 2 values from user and print addition
// #include<stdio.h>
// int main()
// {
//     int a1, a2, ans;
//     printf("enter a number = ");
//     scanf("%d",&a1);
//     printf("enter a number = ");
//     scanf("%d",&a2);
//     ans = a1 + a2 ;
//     printf("%d + %d = %d",a1,a2,ans);
//     return 0;
// }



// get 2 values from user and print sub 
// get 2 values from user and print multi
// get 2 values from user and print div 
// get 2 values from user and print mod

// get radious form user and print area of circle 
// get vales from user and print squre

