// structure

// #include<stdio.h>
// #include<string.h>
// struct mobile
// {
//     int price;
//     float camera;
//     char model[20];
// } iphone15;



// int main()
// {
//     struct mobile iphone16 = {.price = 700000, .camera = 16};
//     int a = sizeof(iphone16);
//     printf("a = %d\n",a);
//     // iphone15.price = 70000;
//     // iphone15.camera = 16.0;
//     // strcpy(iphone15.model,"iphone 15");
//     // printf("%d", iphone15.price);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=



#include<stdio.h>
union student
{
    int PRN;
    int ID;
};

int main()
{
    union student sanvi;
    sanvi.ID = 101;
    printf("ID = %d and PRN = %d\n", sanvi.ID, sanvi.PRN);
    sanvi.PRN = 102;
    printf("ID = %d and PRN = %d\n", sanvi.ID, sanvi.PRN);

    return 0;
}






int a[10] = {12,43,65};