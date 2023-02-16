
 TOPIC = VARIABLE.

variable - cantainer
// a = 2423534457
// b = 563453547
// c = 3856878567
// d = 8356347547
// e = 34573684856
--------------------------
vari - able 
// a = 10 
// a = 20 
// a = 30 
---------------------------

data types

// int = %d =  12,23,54,-32,-543,0
// float = %f =  3.14, 6.5, 5.9, 1.5 
// char = %c = 'A', 'a', '*', '7', '0'

----------------------------

identifier

// a = 23490923423
// aadeshNum = 98563456345
// aadeshAge = 98 
-----------------------------

rules to create identifier

// 1) we can't start with number
// ex:- 5star, 2brothers, 21rollnumber, 

// 2) we can use underscore 
// ex: aadesh_lokhande, roll_number, first_name, name , name 

// 3) we can use letters numbers and underscore only
// rollnumber12, city7, , roll_number22, 

//   4. identifier names are case sensetive 
// a = 10 
// A = 20 

// age = 10
// Age = 20 
// AGE = 30 
------------------------------------------

// #include<stdio.h>
// int main()
// {
//     // datatype variableName;
//     // int a;
    
//     // variableName = value;
//     // a = 10;
    
//     // datatype variableName = value;
//     int a = 10;
//     float b = 3.14;
//     char c = 'p';
    
//     printf("a = %d\n",a);
//     printf("b = %f\n",b);
//     printf("c = %c\n",c);
    
// }

-------------------------------------

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);
    
    
//     printf("a = %d",a);
// }

-------------------------------------

// \n - new line 
// \t - horizontal tab 

// Example for understanding.

#include<stdio.h>
int main()
{
    // with tab 
    printf("\tabcdefgh\n");
    printf("a\tbcdefgh\n");
    printf("ab\tcdefgh\n");
    printf("abc\tdefgh\n");
    printf("abcd\tefgh\n");
    printf("abcde\tfgh\n");
    printf("abcdef\tgh\n");
    
    // with spaces
    printf("    abcdefgh\n");
    printf("a    bcdefgh\n");
    printf("ab    cdefgh\n");
    printf("abc    defgh\n");
    printf("abcd    efgh\n");
    printf("abcde    fgh\n");
    printf("abcdef    gh\n");
}