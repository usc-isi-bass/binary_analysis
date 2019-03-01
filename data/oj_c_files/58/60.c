#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int n,i,temp;
    char s[1000][1000],*p;
    scanf ("%d\n",&n);
    for (i=0;i<n;i++)
    gets (s[i]);
    for (i=0;i<n;i++)
    {
        temp=0;
        p=&s[i][0];
        if (*p!='_' && isalpha(*p)==0)
        printf ("0\n");
        else
        {
            for (p=s[i]+1;*p!='\0';p++)
            {
                if (*p!='_' && isalpha(*p)==0 && isdigit(*p)==0)
                temp++;
            }
            if (temp!=0)
            printf ("0\n");
            if (temp==0)
            printf ("1\n");
            
        }
    }
    return 0;
}    