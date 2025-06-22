// File Handling

// Read mode 

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     int a;
//     ptr = fopen("abc.txt", "r");
//     fscanf(ptr,"%d", &a);
//     printf("a = %d\n",a*100);
//     fclose(ptr);
//     return 0;
// }

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// write mode 

// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("abc.txt", "w");
//     fprintf(ptr, "chin tapak dam dam");
//     fclose(ptr);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// append mode
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr = fopen("abc.txt", "a");
//     fprintf(ptr, "chin tapak dam dam\n");
//     fclose(ptr);
//     return 0;
// }


// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=


// **************** ATM ****************

// pin.txt ----> 1122 ----> 1234
// bal.txt ----> 12000 --> 10000 ----> 12000

// press 1: withdraw
    // enter a pin = 1122
    //     enter a amount = 2000
    //         transaction done
    //         current balance = 10000 
    //     low balance
    // wrong pin

// press 2: check balance 
    // enter a pin = 1122
        // current balance = 10000
    // wrong pin

// press 3: change pin 
    // enter a pin = 1122
        // enter new pin = 1234
        // confirm pin = 1234
            // pin changed.
        // pin doesn't match
    // wrong pin

// press 4: deposit
    // enter a pin = 1234
        // enter amount = 2000
    // wrong pin
    




