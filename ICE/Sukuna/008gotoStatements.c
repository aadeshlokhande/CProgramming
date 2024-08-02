// Goto Statement

// abc :

// #include<stdio.h>
// int main()
// {
//     printf("Hello ");
//     abc:
//     printf("good evening ");
//     goto abc;
//     printf("Pratik ");
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a = 5;
//     printf("Hello \n");
//     abc:
//     printf("Good evening \n");
//     if(a>1)
//     {
//         --a;
//         goto abc;
//     }
//     printf("Pratik");
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i<=20; i++)
//     {
//         printf("%d\n",i);
//         if(i==10)
//         {
//             goto pop;
//         }
//     }
//     pop:
//         printf("abrakadabra");
//     return 0;
// }


// ---------------------------------
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     for(int i = 1; i<= num; i++)
//     {
//         if(i%num==0)
//         {
//             printf("%d\n",num);
//         }
//     }
//     return 0;
// }


// 5 x 1 = 5 
// 5 x 2 = 10 
// .....
// 5 x 10 = 50 


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number = ");
//     scanf("%d",&num);
//     for(int i = 1; i<=10; i++)
//     {
//         printf("%d x %d = %d\n",num,i,num*i);
//     }

//     return 0;
// }
