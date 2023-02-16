// pointer - *,&

#include<stdio.h>
int main()
{
    int sonu = 20;
    int *monu;
    monu = &sonu;
    
    printf("value of sonu = %d\n",sonu);
    printf("Address of sonu = %p\n",&sonu);
    printf("value of monu = %p\n",monu);
    printf("Address of monu = %p\n",&monu);
    printf("value of *monu = %d\n",*monu);
    
    int **police;
    police = &monu;
    printf("value of police = %p\n",police);
    printf("Address of police = %p\n",&police);
    printf("value of *police = %p\n",*police);
    printf("value of **police = %d\n",**police);
    
    int ***DSP;
    DSP = &police;
    
    printf("value of DSP = %p\n",DSP);
    printf("Address of dsp = %p\n",&DSP);
    printf("value of *DSP = %p\n",*DSP);
    printf("value of **DSP = %p\n",**DSP);
    printf("value of ***DSP = %d\n",***DSP);
    
}