// struct and union

// int 
// float 
// char 


// struct structName
// {
//     attributes;
// }


// #include<stdio.h>
// #include<string.h>
// struct Student
// {
//     int roll;
//     int grade;
//     char name[20];
// } gunjan;


// int main()
// {
    // struct Student asha;
    // asha.roll = 1001;
    // asha.grade = 'a';
    // strcpy(asha.name,"asha");

    // struct Student neha;
    // neha.roll = 1002;
    // neha.grade = 'a';
    // strcpy(neha.name,"Neha");

    // struct Student pratik = {.roll = 1003, .grade = 'b'};
    // strcpy(pratik.name,"Pratik");

    // printf("%c",pratik.grade);

    // gunjan.grade = 'a';
    // printf("%d\n",sizeof(gunjan));
    // char a = 'a';
    // printf("%d\n",sizeof(a));
// }


// =================================
// union

// union unionName
// {
//     attributes;
// }


#include<stdio.h>
union Student
{
    int PRN;
    int RegNo;
};

int main()
{
    union Student Khushi;
    Khushi.PRN = 112;
    printf("PRN = %d and RegNo = %d\n",Khushi.PRN, Khushi.RegNo);
    Khushi.RegNo = 110;
    printf("PRN = %d and RegNo = %d\n",Khushi.PRN, Khushi.RegNo);
    return 0;
}