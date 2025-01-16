// nested if else 
// if(condition)
// {
//     statements
//     if(condition)
//     {
//         statements
//     }
//     else 
//     {
//         statements;
//     }
// }
// else 
// {
//     statements;
//     if(condition)
//     {
//         statements
//     }
//     else 
//     {
//         statements;
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age = ");
//     scanf("%d",&age);

//     if(age>0 && age<80)
//     {
//         if(age>18)
//         {
//             printf("you can drive\n");
//         }
//         else
//         {
//             printf("you can't drive\n");
//         }
//     }
//     else
//     {
//         printf("invalid age\n");
//     }
// }




// paisa > 5000
// permission = 1 
// friends > 4 

#include<stdio.h>
int main()
{
    int paise, permission, friends;
    printf("budget kitna hai = ");
    scanf("%d",&paise);
    if(paise>5000)
    {
        printf("tumahre sath kitne friends hai = ");
        scanf("%d",&friends);
        if(friends>4)
        {
            printf("Parents ki permission hai kya = ");
            scanf("%d",&permission);
            if(permission == 1)
            {
                printf("tum goa ja sakte ho\n");
            }
            else
            {
                printf("Goa nhi ja sakte\n");
            }
        }
        else 
        {
            printf("friends add kro\n");
        }
    }
    else
    {
        printf("bhag ja bhikmange\n");
    }
}


// +++++++++++++++ homework ++++++++++++++++++++
// get 3 numbers from user and print greatest number
