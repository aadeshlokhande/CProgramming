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

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// a = 642
// 6 4 2 

// a = 0
// a > 0
//     b = a%10
//     a = a / 10
//     b%2!=0
//         a = 1

#include<stdio.h>
int main()
{
    int sp = 100;
    int ep = 150;
    int lastDigit;
    int flag;
    for(int num= sp; num<=ep; num++)
    {
        flag = 0;
        for(int i = 0; i<3; i++)
            {
                lastDigit = num % 10; // 2684 % 10 = 4
                num = num / 10; // 2684 / 10 = 268
                if(lastDigit%2 != 0)
                {
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                printf("%d\n",num);
            }
        printf("Bhula %d\n",num);
    }

    return 0;
}
