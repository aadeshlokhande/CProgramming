// Marksheet
#include<stdio.h>
int main()
{
    int choice,roll, sub;
    int marks[20][6]={
    {12,13,14,15,16,17},
    {21,22,23,24,25,26},
    {31,32,33,34,35,37},
    {85,86,82,14,51,75},
    {78,56,48,49,42,47},
    {75,96,54,85,25,14},
    {85,96,52,41,67,15},
    {75,96,52,14,58,36},
    {85,96,41,52,36,75},
    {89,56,32,12,45,47},
    {85,96,14,75,96,45},
    {75,89,65,45,26,92},
    {12,15,95,45,78,96},
    {25,26,28,99,45,36},
    {75,79,56,65,45,12},
    {85,96,62,14,58,75},
    {75,45,12,59,75,89},
    {45,56,85,95,15,23},
    {25,58,69,36,25,56},
    {88,95,65,12,48,54}};

    printf("press 1: marks\npress 2: result\npress 3: whole result\n");
    printf("Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter a roll number = ");
            scanf("%d",&roll);
            printf("Press 0: hindi\n");
            printf("Press 1: english\n");
            printf("Press 2: marathi\n");
            printf("Press 3: maths\n");
            printf("Press 4: physics\n");
            printf("Press 5: chemestry\n");
            printf("Enter your choice = ");
            scanf("%d",&sub);

            printf("marks = %d",marks[roll][sub]);
            break;

        case 2:
            printf("Enter a roll number = ");
            scanf("%d",&roll);

            printf("hindi = %d\n",marks[roll][0]);
            printf("english = %d\n",marks[roll][1]);
            printf("marathi = %d\n",marks[roll][2]);
            printf("math = %d\n",marks[roll][3]);
            printf("physics = %d\n",marks[roll][4]);
            printf("chemestry = %d\n",marks[roll][5]);
            break;
        
        case 3:
            printf("\t\tHin\tEng\tMar\tMath\tPhy\tChe\n");
            for(int i = 0; i<20; i++)
            {
                printf("Roll No. %d\t",i);
                for(int j = 0; j<6; j++)
                {
                    printf("%d\t", marks[i][j]);
                }
                printf("\n");
            }
    }

}


// str function
// pointer 
// file handling 
// header files
// struct and union