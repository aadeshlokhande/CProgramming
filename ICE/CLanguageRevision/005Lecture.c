// array

// datatype arrayName[size];
// datatype arrayName[size] = {values};


// int a[5] = {2,5,7,9,4};

// #include<stdio.h>
// int main()
// {
//     int a[5];
//     printf("Enter a number = ");
//     scanf("%d",&a[1]);
    // a[0] = 100;
    // a[1] = 200;
    // a[2] = 300;
    // a[3] = 400;
    // a[4] = 500;
    // int a[5] = {10,20,30,40,50};
    // a[3] = 100;
    // printf("%d",a[1]);
    // for(int i = 0; i<5; i++)
    // {
    //     printf("%d\n",a[i]);
    // }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int a[10] = {1,3,4,5,6,7,8,9,2,10};
//     int index;
//     for(int i = 0; i<10; i++)
//     {
//         if(a[i]==9)
//         {
//             index = i;
//         }
//     }

//     printf("%d",index);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int b[10];
//     int pop = 0;
//     int a[10] = {1,3,4,5,6,7,8,9,2,10};
//     for(int i = 9; i>=0; i--)
//     {    
//         b[pop] = a[i];
//         ++pop;
//     }


//     return 0;
// }


// ===================================================


// #include<stdio.h>
// int main()
// {
//     int a[3][4] = {{1,2,3,4}, {5,6,7,8}, {1,2,6,7}};

//     // printf("%d",a[1][3]);
//     for(int i = 0; i<3; i++)
//     {
//         for(int j = 0; j<4; j++)
//         {
//             printf("a[%d][%d] = %d\n",i,j,a[i][j]);
//         }
//     }
//     return 0;
// }


// ===========================================
// String
// #include<stdio.h>
// int main()
// {
    // char a[10] = {'a','a','d','e','s','h','\0'};
    // char a[10] = "aadesh";
    // for(int i = 0; i<6; i++)
    // {
    //     printf("%c\n",a[i]);
    // }
    // printf("%c",a[2]);
    // printf("my name is %s.",a);

    // char name[30], lname[30];
    // printf("Enter a name = ");
    // scanf("%s%s",name,lname);

    // printf("%s %s",name , lname);

//     char str[50];
//     printf("Enter a str = ");
//     // gets(str);
//     scanf("%[^\n]s",str);

//     printf("output = %s",str);
//     return 0;
// }
// ==================================================


