// struct and union
// **************** Struct ****************
// #include<stdio.h>
// #include<string.h>
// struct Student {
//     char name[20]; // ---> 20 bytes
//     int roll; // ---> 4 byte
//     int age; // ---> 4 byte
//     float CGPA; // ---> 4 byte
   
// };

// int main()
// {
//     struct Student suraj;
//     int size;
//     suraj.roll = 10;
//     // suraj.age = 21;
//     // suraj.CGPA = 8.8;
//     // suraj.grade = 'A';


//     // struct Student suraj = {.age = 21, .CGPA = 8.7, .roll = 101, .grade = 'A'};
//     // strcpy(suraj.name,"suraj");
//     // printf("%d",suraj.roll);
//     size = sizeof(suraj);
//     printf("%d",size);
//     return 0;
// }

// **************** union ****************

// #include<stdio.h>

// union student 
// {
//     int roll;
//     int reg;
// };


// int main()
// {
//     union student suraj;
//     suraj.roll = 1101;
//     printf("roll = %d and reg = %d\n", suraj.roll, suraj.reg);
//     suraj.reg = 101;
//     printf("roll = %d and reg = %d\n", suraj.roll, suraj.reg);
//     return 0;
// }




