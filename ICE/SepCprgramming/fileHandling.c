// file handling

// RAM
// 2200 ---> 8 GB 
// a = 10 

// ROM
// 2200-----> 500gb 


// ===================================

// read mode
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     char name[20];
//     ptr = fopen("abc.txt", "r");
//     fscanf(ptr, "%s", name);
//     printf("data = %s",name);
//     fclose(ptr);
//     return 0;
// }




// write mode 

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("abcde.txt", "w");
//     fprintf(ptr, "hello buddy how are you");
//     fclose(ptr);
//     return 0;
// }






// append mode 
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("abcde.txt", "a");
    fprintf(ptr, "\nhello buddy how are you");
    fclose(ptr);
    return 0;
}