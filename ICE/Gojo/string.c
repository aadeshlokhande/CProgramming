// STRING - collection of char 

// #include<stdio.h>
// int main()
// {
    // char name[20] = {'A','a','d','e', 's', 'h','\0'};
    // printf("%c",name[3]);
    // char name[20] = "Aadesh";
    // for(int i = 0; i<=5; i++)
    // {
    //     printf("%c\n",name[i]);
    // }
    // printf("my name is %s.",name);


    // char str[20], str1[20];
    // printf("enter a str = ");
    // scanf("%s%s", str, str1);
    // printf("str = %s %s",str, str1);

//     char str[20];
//     printf("Enter a str = ");
//     scanf("%[^\n]s",str);
//     printf("str = %s",str);
//     return 0;
// }



// ===========================================

// string function



#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char str[20] = "aadesh";
    char str1[20] = "Aadesh";
    // a = strlen(str);
    a = strcmp(str,str1);
    printf("%d",a);
    return 0;
}