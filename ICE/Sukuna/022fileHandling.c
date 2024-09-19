// file handling

// read mode
// file ----> variable

// #include<stdio.h>
// int main()
// {
//     char str[30];
//     FILE *ptr;
//     ptr = fopen("pop/abc.txt","r");
//     fscanf(ptr, "%s", str );
//     fclose(ptr);
//     printf("my data = %s",str);
//     return 0;
// }


// write mode 
// variable -----> file

// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("pop/abcd.txt", "w");
//     fprintf(file, "danesh bhai sab jante hai...\n");
//     fclose(file);
//     return 0;
// }




// append
// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("pop/abcd.txt", "a");
//     fprintf(file, "elvish bhaii.....\n");
//     fclose(file);
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     system("cls");
//     printf("this is 001\n");
//     system("gcc abc.c");
//     system(".\\a.exe");
//     printf("this is 002\n");

//     return 0;
// }

// OS ....> 