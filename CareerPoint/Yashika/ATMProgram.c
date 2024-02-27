#include<stdio.h>
int main()
{
    int pin = 1234, bal = 12000;
    int choice, upin, amount, npin , cpin;

    printf("Press 1: withdraw\n");
    printf("Press 2: check balance\n");
    printf("Press 3: change pin\n");
    printf("Press 4: exit\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter a pin = ");
            scanf("%d",&upin);
            if(pin==upin)
            {
                printf("enter a amount = ");
                scanf("%d",&amount);
                if(amount<bal)
                {
                    printf("Transaction successful\n");
                    printf("current balance = %d",bal-amount);
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
            printf("Enter a pin = ");
            scanf("%d",&upin);
            if(upin==pin)
            {
                printf("Current balance = %d",bal);
            }
            else
            {
                printf("Wrong pin");
            }
            break;
        
        case 3:
            printf("Enter a pin = ");
            scanf("%d",&upin);
            if(upin==pin)
            {
                printf("enter a new pin = ");
                scanf("%d",&npin);
                printf("confirm your pin = ");
                scanf("%d",&cpin);
                if(npin==cpin)
                {
                    printf("Pin changed successfully\n");
                }
                else
                {
                    printf("Pin doesn't match");
                }
            }
            else 
            {
                printf("wrong pin");
            }
            break;

        case 4:
            printf("thanks for using our service");
    }
}