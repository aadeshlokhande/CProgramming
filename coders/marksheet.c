// marksheet
#include<stdio.h>
int main()
{
    int marks[20][6] = {
        {12,43,76,35,76,36},
        {17,44,66,45,36,39},
        {54,87,48,34,86,57},
        {65,36,76,56,85,37},
        {12,43,76,35,76,36},
        {17,44,66,45,36,39},
        {54,87,48,34,86,57},
        {65,36,76,56,85,37},
        {12,43,76,35,76,36},
        {17,44,66,45,36,39},
        {54,87,48,34,86,57},
        {65,36,76,56,85,37},
        {12,43,76,35,76,36},
        {17,44,66,45,36,39},
        {54,87,48,34,86,57},
        {65,36,76,56,85,37},
        {12,43,76,35,76,36},
        {17,44,66,45,36,39},
        {54,87,48,34,86,57},
        {65,36,76,56,85,37}
    };

    int choice, rollnumber,sub;
    printf("Press 1 : marks\n");
    printf("Press 2 : result\n");
    printf("Press 3 : whole result\n");
    printf("enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter a rollnumber = ");
            scanf("%d",&rollnumber);

            printf("Press 0 : hindi\n");
            printf("Press 1 : marathi\n");
            printf("Press 2 : english\n");
            printf("Press 3 : maths\n");
            printf("Press 4 : science\n");
            printf("Press 5 : SST\n");
            printf("Enter your sub = ");
            scanf("%d",&sub);

            switch(sub)
            {
                case 0:
                    printf("hindi = %d\n",marks[rollnumber][sub]);
                    break;
                
                case 1:
                    printf("marathi = %d\n",marks[rollnumber][sub]);
                    break;

                case 2:
                    printf("english = %d\n",marks[rollnumber][sub]);
                    break;

                case 3:
                    printf("math = %d\n",marks[rollnumber][sub]);
                    break;

                case 4:
                    printf("science = %d\n",marks[rollnumber][sub]);
                    break;

                case 5:
                    printf("SST = %d\n",marks[rollnumber][sub]);
                    break;

                default:
                    printf("invalid choice\n");
                    break;
            }
            break;
        
        case 2:
            printf("Enter a rollnumber = ");
            scanf("%d",&rollnumber);

            printf("hindi = %d\n",marks[rollnumber][0]);
            printf("marathi = %d\n",marks[rollnumber][1]);
            printf("english = %d\n",marks[rollnumber][2]);
            printf("maths = %d\n",marks[rollnumber][3]);
            printf("science = %d\n",marks[rollnumber][4]);
            printf("SST = %d\n",marks[rollnumber][5]);
            break;

        case 3:
            printf("\t\thin\tmar\teng\tmath\tsci\tSST\n");
            for(int i =0; i<20; i++)
            {
                printf("Roll No. %d\t",i);
                for(int j=0; j<6; j++)
                {
                    printf("%d\t",marks[i][j]);
                }
                printf("\n\n");
            }
            break;
    }
}