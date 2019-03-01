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
    char st[1000];
    int i,j,l;
    gets(st);
    l=strlen(st);
    for (i=0;i<l-1;i++)
    {
        if ((st[i]==' ')&&(st[i+1]==' '))          //????????????.
        {
            for (j=i;j<l;j++) st[j]=st[j+1];
            i--;                                   //????,????????
        }
    }
    cout<<st<<endl;
    return 0;
}
