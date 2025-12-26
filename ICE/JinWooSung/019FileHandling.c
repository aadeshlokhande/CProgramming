// ***************** File Handling *****************
// RAM ----> volatile ---> temp 
// 0x353bac ---> var ---> 10
// int var = 10;
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// ROM ----> non volatile ---> long time
// folder ---> file ----> data 
// txt ---> "good morning"
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// read  ---->
// file[data] ----> program

// #include<stdio.h>
// int main()
// {
//     char str[50];
//     FILE *ptr;
//     ptr = fopen("dec26.txt", "r");
//     fscanf(ptr, "%s", str);
//     fclose(ptr);
//     printf("data = %s",str);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// write ---->
// program[data] ---> file

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("dec2026.txt", "w");
//     fprintf(ptr, "bolne lagii..... ");
//     fclose(ptr);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// append --->

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("dec2026.txt", "a");
//     fprintf(ptr, "\nmera yeshu yeshu....");
//     fclose(ptr);
//     return 0;
// }

// ********************************

