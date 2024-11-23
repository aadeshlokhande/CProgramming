// Structure

// #include<stdio.h>
// #include<string.h>

// struct mobile
// {
//     int price;
//     float camera;
//     char model[20];
// } iphone4;




// int main()
// {
//     struct mobile samsungJ7 = {.price = 13000, .camera = 13.0};
//     int a;
//     // samsungJ7.price = 12000;
//     // samsungJ7.camera = 8.0;
//     // strcpy(samsungJ7.model, "galaxy j7");
//     // printf("%f", samsungJ7.camera);
//     a = sizeof(samsungJ7);
//     printf("a = %d\n",a);
//     return 0;
// }




// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// union



// #include<stdio.h>
// union student
// {
//     int PRN;
//     int ID;
// };

// int main()
// {
//     union student parth;
//     parth.ID = 101;
//     printf("ID = %d and PRN = %d\n", parth.ID, parth.PRN);
//     parth.PRN = 102;
//     printf("ID = %d and PRN = %d\n", parth.ID, parth.PRN);

//     return 0;
// }