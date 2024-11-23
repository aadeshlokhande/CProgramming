// FILE Handling

// read 
// #include<stdio.h>
// int main()
// {
//     char str[50];
//     FILE *ptr;
//     ptr = fopen("abc.txt","r");
//     fscanf(ptr, "%s", str);
//     fclose(ptr); 

//     printf("data = %s",str);
//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// #include<stdio.h>
// int main()
// {
//     int a;
//     FILE *ptr;
//     ptr = fopen("abc.txt","r");
//     fscanf(ptr, "%d", &a);
//     fclose(ptr); 
//     printf("data = %d",a);
//     return 0;
// }


// write
// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("zzzabcdef.txt", "w");
//     fprintf(file,"hello bhai kaisa hai");
//     fclose(file);
//     return 0;
// }




// append
// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("zzzabcdef.txt", "a");
//     fprintf(file,"hello bhai kaisa hai\n");
//     fclose(file);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

//add data
    // enter roll = 101
    // enter name = aadesh
    // enter age = 80

// file store
    // 101, aadesh, 80
