// ATM With File Handling

#include<stdio.h>

int ReadPin()
{
    FILE *file;
    int a;
    file = fopen("pin.txt","r");
    fscanf(file, "%d",&a);
    fclose(file);
    return a;
}

int ReadBal()
{
    FILE *file;
    int a;
    file = fopen("bal.txt","r");
    fscanf(file, "%d",&a);
    fclose(file);
    return a;
}

void writePin(int a)
{
    FILE *file;
    file = fopen("pin.txt","w");
    fprintf(file, "%d",a);
    fclose(file);
}


void writeBal(int a)
{
    FILE *file;
    file = fopen("bal.txt","w");
    fprintf(file, "%d",a);
    fclose(file);
}


int main()
{
    int choice, pin, upin, npin, cpin, bal, amount;
    printf("Press 1 : withdraw\n");
    printf("Press 2 : Check balance\n");
    printf("Press 3 : Change pin\n");
    printf("Press 4 : Exit\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            printf("Enter your pin = ");
            scanf("%d",&upin);
            pin = ReadPin();
            if(upin==pin)
            {
                printf("enter a amount = ");
                scanf("%d",&amount);
                bal = ReadBal();
                if(bal>amount)
                {
                    printf("Transaction successfull\n");
                    bal = bal - amount;
                    writeBal(bal);
                    printf("Current balance = %d\n",bal);
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
            break;

        case 2:
            printf("Enter your pin = ");
            scanf("%d",&upin);
            pin = ReadPin();
            if(upin==pin)
            {
                bal = ReadBal();
                printf("Current balance = %d\n",bal);
            }
            else 
            {
                printf("Wrong pin\n");
            }
            break;

        case 3:
            printf("Enter your pin = ");
            scanf("%d",&upin);
            pin = ReadPin();
            if(upin==pin)
            {
                printf("Enter a new pin = ");
                scanf("%d",&npin);
                printf("confirm your pin = ");
                scanf("%d",&cpin);
                if(npin==cpin)
                {
                    printf("pin changed successfully\n");
                    writePin(cpin);
                }
                else 
                {
                    printf("Pin doesn't match\n");
                }
            }
            else 
            {
                printf("Wrong pin \n");
            }
            break;

        case 4:
            printf("Thanks for using our service\n");
            break;

        default:
            printf("invalid input\n");
    }
    return 0;
}