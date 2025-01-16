#include<stdio.h>

int readPin()
{
    int a;
    FILE *file;
    file = fopen("pin.txt", "r");
    fscanf(file, "%d",&a);
    fclose(file);
    return a;
}

int readBal()
{
    int a;
    FILE *file;
    file = fopen("bal.txt", "r");
    fscanf(file, "%d",&a);
    fclose(file);
    return a;
}

void writePin(int a)
{
    FILE *file;
    file = fopen("pin.txt", "w");
    fprintf(file, "%d",a);
    fclose(file);
}

void writeBal(int a)
{
    FILE *file;
    file = fopen("bal.txt", "w");
    fprintf(file, "%d",a);
    fclose(file);
}



int main()
{
    int bal, amount, pin, upin, npin,cpin,choice;

    printf("press 1 : withdraw\n");
    printf("press 2 : check balance\n");
    printf("press 3 : change pin\n");
    printf("press 4 : deposite\n");
    printf("enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("enter a pin = ");
            scanf("%d",&upin);
            pin = readPin();
            if(upin==pin)
            {
                printf("enter a amount = ");
                scanf("%d",&amount);
                bal = readBal();
                if(bal>amount)
                {
                    printf("Transaction done\n");
                    bal = bal - amount;
                    printf("current balance = %d\n",bal);
                    writeBal(bal);
                }
                else 
                {
                    printf("low balance\n");
                }
            }
            else 
            {
                printf("Wrong pin\n");
            }
    }

    printf("********* thank for using our service ******");
    return 0;
}