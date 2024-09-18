// String

// #include<stdio.h>
// int main()
// {
//     printf("hello world");
//     return 0;
// }


#include<stdio.h>
int main()
{
    // char str[20] = {'a','a','d','e','s','h','\0'};
    // char str[20] = "aadesh";
    // printf("%c",str[4]);
    // for(int i = 0; i<6; i++)
    // {
    //     printf("%c\n",str[i]);
    // }
    // printf("my name is %s.",str);
    // char name[20];
    // char lname[20];
    // printf("Enter a name = ");
    // scanf("%s %s",name,lname);
    // printf("my name is %s %s",name,lname);
    
    char str[50];
    printf("enter str = ");
    gets(str);
    printf("str = %s",str);
    
    
    
    return 0;
}