

TOPIC = LOGICAL OPERATOR.

1. && (and) OPERATOR
// and - && - ziddi operator
// true        = 1 
// false       = 0

// jalebi          samosa          feel 
//     0               0           0 
//     0               1           0 
//     1               0           0 
//     1               1           1 

--------------------------------------------

2. || (or) operator
// or   - || - greeb manacha manus 
// jalebi          samosa          feel 
//     0               0           0 
//     0               1           1 
//     1               0           1 
//     1               1           1 

--------------------------------------------
3. ! (not) operator
// not - ! - ultya khopdicha manus
// 1 ---- > 0 
// 0 ---  > 1 

--------
Example.
---------
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);
    
//     if(a>9 && a<100)
//     {
//         printf("this is 2 digit value");
//     }
//     else
//     {
//         printf("This is not a 2 digit value");
//     }
// }

-------------------------------------------------

// **Homework*****
// get percentage from user and print grades
// 0 - 35 = fail 
// 35 - 60 = c grade 
// 60 - 80 = b grade 
// 80 - 90 = a grade
// 90 - 100 = a+ grade
