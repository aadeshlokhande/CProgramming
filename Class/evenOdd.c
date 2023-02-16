#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("EvenOdd1000.c","w");
    fprintf(file,"#include<stdio.h>\n");
    fprintf(file,"int main()\n");
    fprintf(file,"{\n");
    fprintf(file,"\tint a;\n");
    fprintf(file,"\tprintf(\"enter a number = \");\n");
    fprintf(file,"\tscanf(\"%%d\",&a);\n");
    
    fprintf(file,"\tif(a==0)\n\t{\n\t\tprintf(\"Even Number\\n\");\n\t}\n");

    for(int i = 1; i<=1000; i++)
    {
        fprintf(file,"\telse if(a==%d)\n\t{\n\t\tprintf(\"Odd Number\\n\");\n\t}\n",i);
        ++i;
        fprintf(file,"\telse if(a==%d)\n\t{\n\t\tprintf(\"Even Number\\n\");\n\t}\n",i);
    }
    fprintf(file,"\telse\n\t{\n\t\tprintf(\"Invalid number\\n\");\n\t}\n");
    fprintf(file,"\treturn 0;\n}");

    fclose(file);
    return 0;
}