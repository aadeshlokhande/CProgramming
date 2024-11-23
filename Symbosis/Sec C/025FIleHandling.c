// File Handling


// read 


// #include<stdio.h>
// int main()
// {
//     char a[50];
//     FILE *ptr;
//     ptr = fopen("aabc.txt", "r");
//     fscanf(ptr, "%s", a);
//     fclose(ptr);

//     printf("data = %s",a);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     FILE *ptr;
//     ptr = fopen("aabc.txt", "r");
//     fscanf(ptr, "%d", &a);
//     fclose(ptr);

//     printf("data = %d",a);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// write
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("zzzzzzzz.txt", "w");
//     fprintf(ptr, "hello rishi kaise ho...");
//     fclose(ptr);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("zzzzzzzz.txt", "w");
//     for(int i = 0; i<100; i++)
//     {
//         fprintf(ptr, "...\n");
//     }
//     fclose(ptr);
//     return 0;
// }





// append

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("aabc.txt", "a");
//     fprintf(ptr, "hello aadesh...\n");
//     fclose(ptr);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// input
// enter name  = aadesh
// enter age  = 90
// enter roll = 120

// file store
// aadesh, 90, 120


