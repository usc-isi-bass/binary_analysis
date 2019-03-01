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
    int t,i,sum,temp;
    char s[100][100];
    char *p,*q;
    scanf ("%d",&t);
    for (i=0;i<t;i++)
    scanf ("%s",s[i]);
    for (i=0;i<t;i++)
    {
        temp=0;
        for (p=s[i];*p!='\0';p++)
        {
            sum=0;
            for (q=s[i];*q!='\0';q++)
            {
                if (*p==*q)
                sum++;
            }
            if (sum==1&&temp==0)
            {
                                printf("%c\n",*p);
                                temp++;
            }
        }
        if (temp==0)
        printf ("no\n");
    }
    return 0;
}
            