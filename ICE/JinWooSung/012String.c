// **************** String ****************
// collection of chars

// "aadesh"
// 'p'
// "jvgjgkhkhkhPSDFSFD02374829387^%$^#$   ^$" ---> string
// "p" --> string
// 'po' ---> not allowed

// name 
// address 
// email 
// mobile 



// #include<stdio.h>
// int main()
// {
    // char arr[10] = {'A','a','d','e','s','h', '\0'};
    // char arr[10] = "Aadesh";
    
    // for(int i = 0; i<6; i++)
    // {
    //     printf("%c\n", arr[i]);
    // }
    // printf("my name is %s.", arr);
//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=



// #include<stdio.h>
// int main()
// {
//     char name[50];
//     printf("Enter a name = ");
//     scanf("%s", name);
//     printf("my name is %s.",name);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char name[50], lname[50];
//     printf("Enter a name = ");
//     scanf("%s%s", name,lname);
//     printf("my name is %s and last name is %s.",name,lname);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char name[50];
//     printf("enter a name = ");
//     // gets(name);
//     scanf("%[^\n]s",name);
//     printf("My name is %s.",name);
//     return 0;
// }
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// format specifier modification


// %d ---> int  
// #include<stdio.h>
// int main()
// {
//     int a = 1050, b = 50;
//     // printf("a = %d\n",a);
//     printf("  '%-6d'\n",a);
//     printf("+ '%-6d'\n",b);
//     printf("-----------\n",b);
//     printf("  %d",a+b);
//     int a = 123;
//     printf("'%-10d'",a);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// %f ---> float 

// #include<stdio.h>
// int main()
// {
//     float a = 12.789;

//     printf("'%.2f'",a);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// %s ----> string

