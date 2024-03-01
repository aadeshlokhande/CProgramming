#include<stdio.h>
int main()
{
    int a,b,c;
    printf("what is your age ==");
    scanf("%d",&a);
    if(a>18)
    { 
        printf("permission hai kya Raja===");
        scanf("%d",&b);
        if(b==1)
        { 
            printf("Paisa ===");
             scanf("%d",&c);
              if(c==1)
                { 
                    printf("aja bhai goa");
                }
                
              else
               {
                printf("nikal");
               }
        }
        else
         {
            printf("nikal"); 
         }
    }       
    else
    {
        printf("nikal");
    }          
    
    return 0;
}