// structure
// #include<stdio.h>

// struct Student
// {
//     int id;
//     char name[50];
//     float marks;
// };


// int main()
// {
//     // struct Student rishi = {.id = 102};
//     // rishi.id = 101;

//     struct Student rishi = {101, "rishi", 69};
//     struct Student st1 = rishi;
//     printf("%s", st1.name);

//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=




#include<stdio.h>
struct Student
{
    int id;
    char name[50];
    float marks;
} daffodil;


int main()
{
    struct Student stds[3] = {
        {101, "rishi", 69},
        {102, "ayush", 98},
        {103, "somya", 96}
    };
    printf("%f", stds[0].marks);
    return 0;
}