// linear search


// #include<stdio.h>
// int main()
// {
//     int a[10] = {21,43,54,65,34,23,34,46,35,24};
//     int num = 34, index;

//     for(int i = 0; i<10; i++)
//     {
//         if(num==a[i])
//         {
//             index = i;
//             break;
//         }
//     }
//     printf("index = %d",index);


//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// a[5] = {40,30,50,20,10};


// 1st > 2nd
// 1st <--> 2nd

// {40,30,50,20,10} 
// {30,40,50,20,10} 
// {30,40,20,50,10} 
// {30,40,20,10,50}

// {30,40,20,10,50}
// {30,20,40,10,50}
// {30,20,10,40,50}

// {30,20,10,40,50}
// {20,30,10,40,50}
// {20,10,30,40,50}

// {20,10,30,40,50}

// {10,20,30,40,50}



// #include<stdio.h>
// int main()
// {
//     int a[5] = {40,30,50,20,10};
//     int temp;
//     for(int i = 0;i<5; i++)
//     {
//         printf("%d, ",a[i]);
//     }
//     printf("\n");
//     for(int i = 0; i<5; i++)
//     {
//         for(int j = 0; j<5; j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
//     for(int i = 0;i<5; i++)
//     {
//         printf("%d, ",a[i]);
//     }
//     return 0;
// }