// c lang 

// #include<stdio.h>
// int main()
// {
//     printf("hello world");
//     return 0;
// }


// variable
// a = 10 
// a = 20 
// a = 30 

// vari-able

// datatype
// int -%d- 23,65,98,0,-54,-63 
// float -%f- 4.8,5.75
// char -%c- 'd', '5', '*', ' '


// identifier 
// a = 10 
// age = 10 

// 1) we can't start identifier name with number 
// 5star , 7sisters 

// _name, name_, first_name

// 3) case sensitive
// a = 10 
// A = 20 

// int = 10 

// Int = 10

// ===========================================
// keywords - reserve words - 32 words 

// auto	break	case	char	const	continue	default	do
// double	else	enum	extern	float	for	goto	if
// int	long	register	return	short	signed	sizeof	static
// struct	switch	typedef	union	unsigned	void	volatile	while



// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);

//     printf("a = %d",a);
//     return 0;
// }

// ===========================================

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);
//     c = a + b;
//     printf("%d",c);
//     return 0;
// }

// ======================================

// conditional
// if 
// if(condition)
// {
//     code;
// }

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
//     if(age>18)
//     {
//         printf("Adult ");
//     }
//     printf("Boy");
//     return 0;
// }



// if else

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
//     if(age>=18)
//     {
//         printf("you can vote");
//     }
//     else 
//     {
//         printf("you can't vote");
//     }
//     return 0;
// }


// if else ladder 

// |_|
// |_|
// |_|
// |_|
// |_|
// | |

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     if(num==1)
//     {
//         printf("sunday");
//     }
//     else if(num==2)
//     {
//         printf("Monday");
//     }
//     else if(num==3)
//     {
//         printf("tuesday");
//     }
//     else if(num==4)
//     {
//         printf("wedday");
//     }
//     else 
//     {
//         printf("moye moye");
//     }


//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// nested if else 

// if(condition)
// {
//     code;
//     if(condition)
//     {
//         code;
//     }
//     else 
//     {
//         code;
//     }
// }
// else 
// {
//     code;
//     if(condition)
//     {
//         code;
//     }
//     else 
//     {
//         code;
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter a age = ");
//     scanf("%d",&age);
//     if(age>=0 && age<=70)
//     {
//         if(age>18)
//         {
//             printf("you can drive");
//         }
//         else
//         {
//             printf("you can't drive");
//         }
//     }
//     else 
//     {
//         printf("invalid age");
//     }
//     return 0;
// }

// =====================================

// switch case 
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     switch(num)
//     {
//         case 1:
//             printf("ONE");
//             break;
//         case 2:
//             printf("TWO");
//             break;
//         case 3:
//             printf("Three");
//             break;
//         case 4:
//             printf("four");
//             break;
//         default:
//             printf("abrakadbra");
//             break;
//     }
//     return 0;
// }
