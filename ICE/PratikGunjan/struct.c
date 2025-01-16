// struct and union
// #include<stdio.h>
// #include<string.h>
// struct laptop{
//     int ram;
//     int rom;
//     float display;
//     char proccessor[20];
// };

// int  main()
// {
//     struct laptop MSI;
//     int size;
//     size = sizeof(MSI);
//     printf("size = %d",size);
// }



// #include<stdio.h>
// union abc{
//     int hello1;
//     int hello2;
// };

// int main()
// {
//     union abc pratik;
//     pratik.hello1 = 10;
//     printf("Hello1 = %d and hello2 = %d\n",pratik.hello1,pratik.hello2);
//     pratik.hello2 = 1000;
//     printf("Hello1 = %d and hello2 = %d\n",pratik.hello1,pratik.hello2);
// }