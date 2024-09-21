// struct 

// int 
// float 
// char 

// array ---> 
// struct 

// student 
//     roll 
//     name
//     std 

// int a;


// iphone 14 --->100 attributes


// mobile - 
//     price 
//     colour 
//     brand 
//     model 
// laptop 
//     price 
//     colour 
//     brand 
//     model 


// #include<stdio.h>
// #include<string.h>
// struct Car
// {
//     int price;
//     float avrg;
//     char model[20];
// } AudiA4;



// int -----> 4 byte 
// float ----> 4 byte 
// char ----> 1 byte 

// 'c'
// "c language"

// int main()
// {
    // struct Car Baleno;
    // int a;
    // Baleno.price = 700000;
    // Baleno.avrg = 21.56;
    // strcpy(Baleno.model, "Baleno 2.0");

    // struct Car bmwx7;
    // bmwx7.price = 2300000;
    // printf("%d\n",bmwx7.price);
    // printf("%d\n", Baleno.price);

    // a = sizeof(Baleno);
    // printf("%d",a);

    // printf("model = %s",Baleno.model);


    // struct Car AudiA5 = {.price = 2300000, .avrg = 5.6};
    // strcpy(AudiA5.model, "A5");

    // AudiA4.price = 3400000;
    // printf("%d",AudiA4.price);

//     return 0;
// }



// =========================================================

// milage 
// avrg 

// #include<stdio.h>
// #include<string.h>
// union Car
// {
//     float avrg;
//     float milage;
//     float abc;
// };

// int main()
// {
//     union Car Baleno;
//     int a;
    // Baleno.milage = 23.7;
    // printf("avrage = %.2f\n",Baleno.avrg);
    // printf("milage = %.2f\n",Baleno.milage);
    // printf("abc = %.2f\n",Baleno.abc);
    // a = sizeof(Baleno);
    // printf("%d",a);
    // Baleno.avrg = 22.6;
    // printf("avrage = %.2f\n",Baleno.avrg);
    // printf("milage = %.2f\n",Baleno.milage);
    // printf("abc = %.2f\n",Baleno.abc);
// }

// 10,00,00,000
// username = indrajeet123
// id = indrajeet123

// 10,00,00,000
// mobile  = "917058232826" - 12 ----> 12 bytes
// account = "917058232826" - 12 -----> 12 bytes x 100000000
