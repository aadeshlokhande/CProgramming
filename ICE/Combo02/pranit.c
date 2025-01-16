#include<stdio.h>
int main()
{ 
    int ch,l , b ,r, h;

    printf("1Area of Rectangle\n2.Area of Triangle\n.3Area of Circel\n4.Area of Parallelogram ");
    printf("Enter the choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : 
            printf("Enter a l , b = ");
            scanf("%d%d",&l, &b);
            printf("%d",l*b);
                 break;
        case 2 : printf("%d",1/2*l*b);
                 break;
        case 3 : printf("%d",3.14*r*r);
                 break;
        case 4 : printf("%d",b*h );
                 break;
        default: printf("Wrong choice");
                 break;
    }


}