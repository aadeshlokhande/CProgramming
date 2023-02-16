// // struct and union
// #include<stdio.h>
// #include<string.h>

// struct Student
// {
//     char name[20];
//     int age;
//     int class;
// };

// int main()
// {
//     struct Student ganesh;
//     ganesh.age = 19;
//     ganesh.class = 12;
//     strcpy(ganesh.name, "Ganesh");
    
    
    
//     printf("Name = %s\n",ganesh.name);
//     printf("age = %d\n",ganesh.age);
//     printf("class = %dth\n",ganesh.class);
    
// }






// ============================================
// struct and union
// #include<stdio.h>
// #include<string.h>
// struct Student
// {
//     int rollnumber; // 4 
//     int age;  // 4 
//     int class; // 4 
// };

// int main()
// {
//     struct Student ganesh = {.rollnumber = 100, .age=19, .class = 12};
//     printf("rollnumber = %d\n",ganesh.rollnumber);
//     printf("age = %d\n",ganesh.age);
//     printf("class = %dth\n",ganesh.class);
// }

// ------------------------------
// sizeof()
// #include<stdio.h>
// int main()
// {
//     char a;
//     printf("%ld\n",sizeof(a));
// }


// ------------------------------













// #include<stdio.h>
// union Student
// {
//     int rollnumber; // 4 
//     int age;  // 4 
//     int class; // 4 
// };

// int main()
// {
//     union Student ganesh;
    // ganesh.age = 19;
    // printf("rollnumber = %d\n",ganesh.rollnumber);
    // printf("age = %d\n",ganesh.age);
    // printf("class = %dth\n",ganesh.class);
    
    // printf("%ld\n",sizeof(ganesh));
    
    // ganesh.rollnumber = 35;
    // printf("rollnumber = %d\n",ganesh.rollnumber);
    // printf("age = %d\n",ganesh.age);
    // printf("class = %dth\n",ganesh.class);
    
    // ganesh.class = 12;
    // printf("rollnumber = %d\n",ganesh.rollnumber);
    // printf("age = %d\n",ganesh.age);
    // printf("class = %dth\n",ganesh.class);
// }