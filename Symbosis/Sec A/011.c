// switch case 

// switch(value)
// {
//     case value1: 
//         code;
    
//     case value2:    
//         code;
    
//     case value3:    
//         code;
    
//     default:    
//         code;
        
// }

// #include<stdio.h>
// int main()
// {
//     int num;

//     printf("Enter a number = ");
//     scanf("%d",&num);

//     switch(num)
//     {
//         case 1:
//             printf("ONE\n");
//             break;

//         case 2:
//             printf("TWO\n");
//             break;

//         case 3:
//             printf("THREE\n");
//             break;

//         case 4:
//             printf("FOUR\n");
//             break;

//         default:
//             printf("invalid number\n");
//             break;
//     }
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int a,b,ans,choice;

//     printf("Enter a number = ");
//     scanf("%d",&a);
//     printf("Enter a number = ");
//     scanf("%d",&b);

//     printf("Press 1 : add\n");
//     printf("Press 2 : sub\n");
//     printf("Press 3 : multi\n");
//     printf("Press 4 : div\n");
//     printf("Enter your choice = ");
//     scanf("%d",&choice);

//     switch(choice)
//     {
//         case  1:
//             ans = a + b;
//             printf("ans = %d\n",ans);
//             break;
        
//         case  2:
//             ans = a - b;
//             printf("ans = %d\n",ans);
//             break;

//         case  3:
//             ans = a * b;
//             printf("ans = %d\n",ans);
//             break;

//         case  4:
//             ans = a / b;
//             printf("ans = %d\n",ans);
//             break;
        
//         default:    
//             printf("invalid choice");
//     }

//     return 0;
// }







// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// loop

// for loop

// for(init; cond; inc/dec)
// {
//     code;
// }

// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=10; a++)
//     {
//         printf("%d\n",a);
//     }

//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// #include<stdio.h>
// int main()
// {
//     for(int a = 10; a>=1; a--)
//     {
//         printf("%d\n",a);
//     }

//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     for(int a = 1; a<=10; a++)
//     {
//         printf("hello... ");
//     }
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// while

// while(condition)
// {
//     code;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 1;
//     while(a<=5)
//     {
//         printf("hello... %d\n",a);
//         a++;
//     }
//     return 0;
// }

// ========================================

// #include<stdio.h>
// int main()
// {
//     int a,b,ans, con = 1;

//     while(con==1)
//     {
//         printf("Enter a number = ");
//         scanf("%d",&a);
//         printf("Enter a number = ");
//         scanf("%d",&b);
//         ans = a + b;
//         printf("ans = %d\n",ans);

//         printf("do you want to continue 1/0 = ");
//         scanf("%d",&con);
//     }

//     return 0;
// }




// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// swap 2 values

// #include<stdio.h>
// int main()
// {
//     int a = 10 ;
//     int b = 20 ;
//     int temp;
//     printf("a = %d and b = %d\n",a,b);

//     temp = a ;
//     a = b ;
//     b = temp;

//     printf("a = %d and b = %d\n",a,b);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("a = %d and b = %d\n",a,b);

//     a = a + b; // a = 30 
//     b = a - b; // b = 10
//     a = a - b; // a = 20 

//     printf("a = %d and b = %d\n",a,b);

//     return 0;
// }


 



// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// #include<stdio.h>
// int main()
// {
//     int a =10,b=20,c=30,d=40,temp;
//     printf("%d,%d,%d,%d\n",a,b,c,d);

//     // temp = d;
//     // d = c;
//     // c = b;
//     // b = a;
//     // a = temp;

//     temp = a;
//     a = b ;
//     b = c;
//     c = d;
//     d = temp;

//     printf("%d,%d,%d,%d\n",a,b,c,d);
    
//     return 0;
// }