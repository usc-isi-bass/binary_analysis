#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define true 1
#define false 0
char *myReadString (char *s, FILE *stream)
{
    register char  c;
    register int  flag;
    register char *cs;
    cs = s;
    
    c = getc(stream);
    flag = false;
    while(c!=EOF)
    {
        
        if (('\n' != c) && (' ' != c) && ('\t' != c))
        {
            *cs++ = c;
            flag = true;
        }
        else if (flag == true)
        {
            break;
        }
        c = getc(stream);
    }
    *cs = '\0';
    return s;
}
