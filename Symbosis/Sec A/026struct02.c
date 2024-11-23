// Structure

// #include<stdio.h>
// struct Student
// {
//     int id;
//     char name[50];
//     float marks;
// };

// int main()
// {
//     // struct Student vedant = {.id = 101};
//     // vedant.id = 101;
//     struct Student vedant = {101, "vedant", 0};
//     printf("%s", vedant.name);
//     return 0;
// }



#include<stdio.h>
struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student stds[3] = {
        {101, "vedant", 0},
        {102, "vanshika", 99.5},
        {103, "parth", 69}
    };

    printf("%f", stds[2].marks);
    
    return 0;
}
