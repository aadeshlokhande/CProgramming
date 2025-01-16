// struct and union

// #include<stdio.h>
// #include<string.h>
// struct Car 
// {
//     int Number;
//     int price;
//     float avrg;
//     char brand[20];
// } x3 ;



// int main()
// {
//     struct Car nexon;
//     // nexon.Number = 1234;
//     // nexon.price = 1400000;
//     // nexon.avrg = 16.5;
//     // strcpy(nexon.brand,"TATA");
//     // printf("%d",nexon.price);
    
//     // struct Car baleno = {.Number = 1122, .price = 1200000};
//     // int a = 10;
//     // int size;
//     // size=sizeof(nexon);
//     // printf("size of %d bytes",size);
// }




// #include<stdio.h>

// union student
// {
//     int id;
//     int rollNumber;
// };
// int main()
// {
//     union student ritesh;
//     int size;
//     size = sizeof(ritesh);
//     printf("size = %d\n",size);
    
    
//     ritesh.id = 10001;
//     printf("id = %d and rollNumber = %d\n",ritesh.id, ritesh.rollNumber);
//     ritesh.rollNumber = 20002;
//     printf("id = %d and rollNumber = %d\n",ritesh.id, ritesh.rollNumber);
// }



// #include<stdio.h>

// int a = 20;

// void hello()
// {
//     printf("a = %d",a);
// }

// int main()
// {
//     int a = 10;
//     {
//         {
//             {
//                 int a = 30;
//             }
//         }
//         int a = 90;
//     }
//     hello();
// }
