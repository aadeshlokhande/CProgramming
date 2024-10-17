// string


// char name[20];


#include<stdio.h>
int main()
{
    // char name[20] = {'A', 'y', 'u', 's', 'h', '\0'};
    // char name[20] = "Ayush";

    // printf("%c",name[0]);
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%c\n", name[i]);
    // }

    // printf("my name is %s.", name);
    // =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

    char name[20];

    printf("Enter a name = ");
    // scanf("%s",name);
    // gets(name);
    
    scanf("%[^a]s",name);

    printf("name = %s",name);


    return 0;
}

// input
// enter your name = Aadesh lokhande
// enter your age = 67

// Output
// my name is Aadesh lokhande and my age is 67 year old


// enter str =  hello buddy how are you.
// vo = 4
// co = 15