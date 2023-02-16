// struct

// #include<stdio.h>
// #include<string.h>
// struct Car 
// {
//     int price;
//     float avrg;
//     char model[20];
//     char brand[20];
// };

// int main()
// {
//     struct Car nano;
//     nano.price = 400000;
//     nano.avrg = 18.5;
//     strcpy(nano.model, "nano");
//     strcpy(nano.brand, "TATA");
    
//     printf("%d\n",nano.price);
//     printf("%s\n",nano.brand);
    
//     printf("size = %d\n",sizeof(nano));
// }



// #include<stdio.h>
// #include<string.h>
// struct Car 
// {
//     int price;
//     float avrg;
//     int tyre;
//     int airbags;
// };

// int main()
// {
//     struct Car nano = {.price = 1231231, .avrg = 23.5, .tyre = 4, .airbags = 6};
//     printf("tyre = %d\n",nano.tyre);

//     struct Car Thar = {.price = 1500000, .avrg = 19.5, .tyre = 4, .airbags = 8};
//     printf("price = %d\n",Thar.price);
//     printf("avrg = %f\n",Thar.avrg);
//     printf("tyre = %d\n",Thar.tyre);
//     printf("airbag = %d\n",Thar.airbags);
//     printf("size = %d\n",sizeof(Thar));
// }





// ******************** union ******************
// #include<stdio.h>
// #include<string.h>
// union Id
// {
//     int PRN;
//     int RollNumber;
//     char section;
// };

// int main()
// {
//     union Id tanvi;
//     tanvi.PRN = 65;
//     printf("prn = %d\n",tanvi.PRN);
//     printf("rollnumber = %d\n",tanvi.RollNumber);
//     printf("section = %c\n",tanvi.section );

//     tanvi.RollNumber = 70;
//     printf("prn = %d\n",tanvi.PRN);
//     printf("rollnumber = %d\n",tanvi.RollNumber);
//     printf("section = %c\n",tanvi.section );
    
//     printf("size = %d\n",sizeof(tanvi));

// }



