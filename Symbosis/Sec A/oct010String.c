// String

#include<stdio.h>
int main()
{
    // char str[50] = {'N', 'a', 'r','u','t','o','\0'};
    // char str[50] = "Naruto";
    // printf("%c",str[2]);

    // for(int i = 0; i<6;i++)
    // {
    //     printf("%c\n",str[i]);
    // }
    // printf("my name is %s.",str);

    // =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

    // char name[20], lname[20];
    // printf("Enter a name = ");
    // scanf("%s %s",name,lname);

    // printf("name = %s %s",name,lname);

    // =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
    char str[50];
    printf("Enter a str = ");
    // gets(str);
    scanf("%[^\n]s",str);

    printf("str = %s",str);
    return 0;
}