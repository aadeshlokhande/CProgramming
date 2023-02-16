/ goto statement - jump statement 


// if we use goto first and then labal that time statements will be not executed bitween goto and labal 
// #include<stdio.h>
// int main()
// {
//     printf("Hello, ");
//     goto abc;
//     printf("Good evening, ");
//     abc:
//     printf("Mohnish");
// }


// if we use labal first and then goto that time statements will be continuesly executed bitween goto and labal
// #include<stdio.h>
// int main()
// {
//     printf("Hello, ");
//     abc:
//     printf("Good evening, ");
//     goto abc;
//     printf("Mohnish");
// }



// #include<stdio.h>
// int main()
// {
//     int a = 5;
//     printf("Hello, ");
//     abc:
//     printf("Good evening, ");
//     if(a>1)
//     {
//         --a;
//         goto abc;
//     }
//     printf("Mohnish");
// }



// ******** HOMEWORK ********
// print values 1 to 100
// you can print "sorry" 100 times