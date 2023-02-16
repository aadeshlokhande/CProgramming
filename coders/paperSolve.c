// 1 
// #include<stdio.h>
// int main()
// {
//     int a1,a2,a3;

//     printf("Enter a number = ");
//     scanf("%d",&a1);
//     printf("Enter a number = ");
//     scanf("%d",&a2);
//     printf("Enter a number = ");
//     scanf("%d",&a3);

//     if(a1>a2)
//     {
//         if(a1>a3)
//         {
//             printf("Greatest value = %d\n",a1);
//         }
//         else 
//         {
//             printf("Greatest value = %d\n",a3);
//         }
//     }   
//     else 
//     {
//         if(a2>a3)
//         {
//             printf("Greatest value = %d\n",a2);
//         }
//         else
//         {
//             printf("Greatest value = %d\n",a3);
//         }
//     }
// }



// 2) 
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number = ");
//     scanf("%d",&a);

//     if(a>0)
//     {
//         printf("+ve number\n");
//     }
//     else if(a<0)
//     {
//         printf("-ve number\n");
//     }
//     else 
//     {
//         printf("your number is zero\n");
//     }
//     return 0;
// }


// 3) 
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     if((num%5==0) && (num%11==0))
//     {
//         printf("true\n");
//     }
//     else 
//     {
//         printf("false\n");
//     }
// }

// 4) 
// #include<stdio.h>
// int main()
// {
//     int amount,bal;
//     printf("Enter an amount = ");
//     scanf("%d",&amount);
//     // amount = 2345
//     bal = amount / 2000;
//     amount = amount % 2000;
//     printf("2000 = %d\n",bal);

//     bal = amount / 500;
//     amount = amount % 500;
//     printf("500 = %d\n",bal);

//     bal = amount / 200;
//     amount = amount % 200;
//     printf("200 = %d\n",bal);

//     bal = amount / 100;
//     amount = amount % 100;
//     printf("100 = %d\n",bal);

//     bal = amount / 50;
//     amount = amount % 50;
//     printf("50 = %d\n",bal);

//     bal = amount / 20;
//     amount = amount % 20;
//     printf("20 = %d\n",bal);

//     bal = amount / 10;
//     amount = amount % 10;
//     printf("10 = %d\n",bal);

//     bal = amount / 5;
//     amount = amount % 5;
//     printf("5 = %d\n",bal);

//     bal = amount / 2;
//     amount = amount % 2;
//     printf("2 = %d\n",bal);

//     bal = amount / 1;
//     amount = amount % 1;
//     printf("1 = %d\n",bal);
// }


// 5) 
// #include<stdio.h>
// int main()
// {
//     int sp, cp;
//     printf("enter a cost price = ");
//     scanf("%d",&cp);
//     printf("enter a selling price = ");
//     scanf("%d",&sp);

//     if(sp>cp)
//     {
//         printf("profit\n");
//     }
//     else 
//     {
//         printf("loss\n");
//     }
// }


// 6)
// #include<stdio.h>
// int main()
// {
//     int a=10,b=20,c ;
//     printf("a = %d and b = %d\n",a,b);
//     c = a;
//     a = b;
//     b = c;
//     printf("a = %d and b = %d\n",a,b);

// }



// #include<stdio.h>
// int main()
// {
//     int a=10,b=20;
//     printf("a = %d and b = %d\n",a,b);
//     a = a + b;                  //a = 30
//     b = a - b;                  //b = 10
//     a = a - b;                  //a = 20
//     printf("a = %d and b = %d\n",a,b);

// }


// 7)
// #include<stdio.h>
// int main()
// {
//     int num , sum=0, sq;
//     printf("Enter a number = ");
//     scanf("%d",&num);

//     for(int i = 1; i<=num; i++)
//     {
//         sq = i * i;
//         printf("%d x %d = %d\n",i,i,sq);
//         sum = sum + sq;
//     } 

//     printf("\ntotal = %d\n",sum);
// }



