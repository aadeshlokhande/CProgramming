// string function
#include<string.h>
#include<stdio.h>
int main()
{
    int a;
    char str1[50] = "malayalam";
    // char str2[50];
    // a = strlen(str1);
    // a = strcmp(str1,str2);
    // strcat(str1,str2);
    // strcpy(str2, str1);

    // strupr(str1);
    // strlwr(str1);
    strrev(str1);

    printf("str1 = %s",str1);
    return 0;
}