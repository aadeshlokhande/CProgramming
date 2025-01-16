// enter a str = {}{{{}{}}}

// {}{}{}{} ----> valid
// {{}{}{}} ----> valid
// {{{{{{}}}}}} ----> valid
// {{{}{}{}}{}{{}{}}{}} ----> valid
// {}}{}{}{}{{} ----> invalid
// {}}{{}  ----> invalid
// {{{}{}}{}} --> valid
// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=

// logic
// a = 0 

// '{' = ++a
// '}' = --a 

// {}}{{}
// {}{}{}{


// a = 0 

// =<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=<:>=



#include<stdio.h>
#include<string.h>

int main()
{
    int a = 0;
    int len;
    char str[50];
    printf("Enter a str = ");
    scanf("%s",str);
    len = strlen(str);

    for(int i = 0; i<len; i++)
    {
        if(a>=0)
        {
            if(str[i]=='{')
            {
                ++a;
            }
            else 
            {
                --a;
            }
        }
        else 
        {
            break;
        }
    }

    if(a==0)
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }

    return 0;
}
