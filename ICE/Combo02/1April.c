#include<stdio.h>
int main()
{
    char alpha[26][7][15]={
    {"   ###   ",  "  ## ##  ",  " ##   ## ",  "#########",  "##     ##",  "##     ##",  "##     ##"},
    {"######## ",  "##     ##",  "##     ##",  "######## ",  "##     ##",  "##     ##",  "######## "},
    {" ######  ",  "##    ## ",  "##       ",  "##       ",  "##       ",  "##    ## ",  " ######  "},  
    {"######## ",  "##     ##",  "##     ##",  "##     ##",  "##     ##",  "##     ##",  "######## "},  
    {"######## ",  "##       ",  "##       ",  "######   ",  "##       ",  "##       ",  "######## "}, 
    {"######## ",  "##       ",  "##       ",  "######   ",  "##       ",  "##       ",  "##       "},
    {" ######  ",  "##    ## ",  "##       ",  "##   ####",  "##    ## ",  "##    ## ",  " ######  "},
    {"##     ##",  "##     ##",  "##     ##",  "#########",  "##     ##",  "##     ##",  "##     ##"},
    {"####     ",  " ##      ",  " ##      ",  " ##      ",  " ##      ",  " ##      ",  "####     "},  
    {"      ## ",  "      ## ",  "      ## ",  "      ## ",  "##    ## ",  "##    ## ",  " ######  "},
    {"##    ## ",  "##   ##  ",  "##  ##   ",  "#####    ",  "##  ##   ",  "##   ##  ",  "##    ## "}, 
    {"##       ",  "##       ",  "##       ",  "##       ",  "##       ",  "##       ",  "######## "},  
    {"##     ##",  "###   ###",  "#### ####",  "## ### ##",  "##     ##",  "##     ##",  "##     ##"},
    {"##    ## ",  "###   ## ",  "####  ## ",  "## ## ## ",  "##  #### ",  "##   ### ",  "##    ## "}, 
    {" ####### ",  "##     ##",  "##     ##",  "##     ##",  "##     ##",  "##     ##",  " ####### "},
    {"######## ",  "##     ##",  "##     ##",  "######## ",  "##       ",  "##       ",  "##       "},
   {" ####### ",  "##     ##",  "##     ##",  "##     ##",  "##  ## ##",  "##    ## ",  " ##### ##"},
    {"######## ",  "##     ##",  "##     ##",  "######## ",  "##   ##  ",  "##    ## ",  "##     ##"},
    {" ######  ",  "##    ## ",  "##       ",  " ######  ",  "      ## ",  "##    ## ",  " ######  "},
    {"######## ",  "   ##    ",  "   ##    ",  "   ##    ",  "   ##    ",  "   ##    ",  "   ##    "}, 
    {"##     ##",  "##     ##",  "##     ##",  "##     ##",  "##     ##",  "##     ##",  " ####### "},
    {"##     ##",  "##     ##",  "##     ##",  "##     ##",  " ##   ## ",  "  ## ##  ",  "   ###   "},  
    {"##      ##", "##  ##  ##", "##  ##  ##",  "##  ##  ##", "##  ##  ##", "##  ##  ##", " ###  ### "},
    {"##     ##",  " ##   ## ",  "  ## ##  ",  "   ###   ",  "  ## ##  ",  " ##   ## ",  "##     ##"},
    {"##    ## ",  " ##  ##  ",  "  ####   ",  "   ##    ",  "   ##    ",  "   ##    ",  "   ##    "},
    {"######## ",  "     ##  ",  "    ##   ",  "   ##    ",  "  ##    ",  " ##     ",  "######## " } 
};

    char a = 'a';
    int index;
    char letters[30] = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i<26; i++)
    {
        if(letters[i]==a)
        {
            index = i;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%s\n",alpha[index][i]);
    }
    
}