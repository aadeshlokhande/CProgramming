// goto 

// labal 
// goto 

// #include<stdio.h>
// int main()
// {
//     int a = 5;
//     printf("hello ");
//     abc:
//     printf("good evening ");
//     if(a>1)
//     {
//         --a;
//         goto abc;
//     }
//     printf("Dev");

//     return 0;
// }

// ************** File handling ***************
// int a = 10; ------> RAM --------> 
// ROM -----> 
// i am good boy

// read --->

// #include<stdio.h>
// int main()
// {
//     int a;
//     char lol[30];
//     FILE *file; 
//     file = fopen("abc.txt", "r");
//     fscanf(file, "%s %d", lol, &a);
//     fclose(file);
//     printf("num - %d \nstr - %s",a+4, lol);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter a number = ");
//     scanf("%d %d",&a, &b);
//     printf("a = %d, b = %d",a,b);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// write

// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("abc.txt", "w");
//     fprintf(file, "bhau zal ka j1");
//     fclose(file);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// append 

// #include<stdio.h>
// int main()
// {
//     FILE *file;
//     file = fopen("abc.txt", "a");
//     fprintf(file, "bhau zal ka j1\n");
//     fclose(file);
//     return 0;
// }
