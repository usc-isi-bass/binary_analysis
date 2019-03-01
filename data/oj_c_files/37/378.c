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
    int t,i,j;
    long l,n;
    scanf ("%d",&t);
    for (i=0;i<t;i++)
    {
        int zimu[26]={0};
        char string[100000];
        char m;
        scanf ("%s",string);
        l=strlen(string);
        for (j=97;j<=122;j++)
        {
            for (n=0;n<l;n++)
            {
                if (j==string[n])
                {
                   zimu[j-97]++;
                }
            }
        }
        for (j=0,n=0;j<l;j++)
        {
            if (zimu[string[j]-97]==1)
            {
               printf ("%c\n",string[j]) ;
               n=1;
               break;
            } 
        }
        if (n==0)
        printf ("no\n") ;
    }
    getchar ();
    getchar ();
}
                 
