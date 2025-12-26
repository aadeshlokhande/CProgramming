#include <stdlib.h>

int main() 
{    
    system("cd ..");
    system("cd ..");
    system("git status");
    system("git add .");
    system("git commit -m \"C Language\"");
    system("git push -u origin main");
    return 0;
}
