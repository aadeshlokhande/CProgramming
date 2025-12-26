#include <stdlib.h>
void main()
{
    system("cd ..");
    system("cd ..");
    system("git add .");
    system("git commit -m \"C Language\"");
    system("git push -u origin main");
}