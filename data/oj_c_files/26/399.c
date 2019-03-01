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

int main ()
{
    char string[105];
    gets (string);
    int l,i,j;
    l=strlen (string);
    for (i=0;i<l;i++)
    {
        if (string[i]==' ' && string[i+1]==' ')
        {
            for (j=i;j<l;j++)
            {
                string[j]=string[j+1];
            }
            i=i-1;
        }
    }
    printf ("%s",string);
    getchar ();
    getchar ();
}
    
