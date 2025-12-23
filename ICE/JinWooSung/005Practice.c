// **************** Practice ****************

// swap values
// a = 10
// b = 20
// printf("a,b");
// logic
// printf("a,b");

// a glass ---> water
// b glass ---> juice
// c glass 


// c glass <---- A glass
// a glass <---- b glass 
// b glass <---- c glass  


// #include<stdio.h>
// int main()
// {
//     int a = 10, b= 20, c;
//     printf("a = %d and b = %d\n",a,b);

//     // with using 3rd variable
//     // c = a ;
//     // a = b ;
//     // b = c ;

//     // without using 3rd variable
//     a = a+b; // a = 30
//     b = a-b; // b = 10
//     a = a-b; // a = 20
//     printf("a = %d and b = %d\n",a,b);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// seconds = 4000

// h,m,s 
// 1 hour = 3600
// 400 sec 
// 6 min = 360
// 40 sec 

// 1 hour, 6 min, 40 sec 

// #include<stdio.h>
// int main()
// {
//     int sec, hr, min, rem;
//     printf("Enter a seconds = ");
//     scanf("%d",&sec);
//     hr = sec / 3600;
//     rem = sec % 3600;
//     min = rem / 60;
//     sec = rem % 60;

//     printf("hr = %d min = %d sec = %d",hr,min,sec);

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// convert amount in minimum currency
// amount = 4328

// output
// 500Note = 8
// 200note = 1
// 100note = 1
// 20note = 1
// 5coin = 1
// 2coin = 1
// 1coin = 1

// #include<stdio.h>
// int main()
// {
//     int amount, note500, note200, note100, note50;
//     int note20, note10, coin5, coin2, coin1, rem ;
//     printf("Enter a amount = ");
//     scanf("%d",&amount); // 5432 / 500 = 10

//     note500 = amount / 500;
//     rem = amount % 500;
//     note200 = rem / 200;
//     rem = rem % 200;
//     note100 = rem / 100;
//     rem = rem % 100;
//     note50 = rem / 50;
//     rem = rem % 50;
//     note20 = rem / 20;
//     rem = rem % 20;
//     note10 = rem / 10;
//     rem = rem % 10;
//     coin5 = rem / 5;
//     rem = rem % 5;
//     coin2 = rem / 2;
//     rem = rem % 2;
//     coin1 = rem;

//     printf("500 note = %d\n",note500);
//     printf("200 note = %d\n",note200);
//     printf("100 note = %d\n",note100);
//     printf("50 note = %d\n",note50);
//     printf("20 note = %d\n",note20);
//     printf("10 note = %d\n",note10);
//     printf("5 coin = %d\n",coin5);
//     printf("2 coin = %d\n",coin2);
//     printf("1 coin = %d\n",coin1);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// a = 642
// 6 4 2 

// a = 0
// a > 0
//     b = a%10
//     a = a / 10
//     b%2!=0
//         a = 1

// #include<stdio.h>
// int main()
// {
//     int sp = 100;
//     int ep = 150;
//     int lastDigit;
//     int flag;
//     for(int num= sp; num<=ep; num++)
//     {
//         flag = 0;
//         for(int i = 0; i<3; i++)
//             {
//                 lastDigit = num % 10; // 2684 % 10 = 4
//                 num = num / 10; // 2684 / 10 = 268
//                 if(lastDigit%2 != 0)
//                 {
//                     flag = 1;
//                 }
//             }
//             if(flag == 0)
//             {
//                 printf("%d\n",num);
//             }
//         printf("Bhula %d\n",num);
//     }

//     return 0;
// }
