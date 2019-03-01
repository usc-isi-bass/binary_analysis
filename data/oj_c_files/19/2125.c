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
    char *p1,*p2;
    int i,j,n,m,w;
    char r[200],s[200],t[200];
    gets(r);gets(s);gets(t);
    p1=r;p2=s;n=strlen(s);
    for(i=0;*(p1+i)!='\0';)
    {
        if(*(p1+i)!=*p2) {printf("%c",*(p1+i));i++;}
        else
        {
            for(j=1,w=1;j<n;j++)
            {
                if(*(p1+i+j)!=*(p2+j))
                {
                    for(m=0;m<j;m++) printf("%c",*(p1+i+m));break;
                }
                w++;
            }
            if (w==n)
            {if(((*(p1+i+n)==' '||*(p1+i+n)=='\0')&&*(p1+i-1)==' ')||((i==0)&&*(p1+n)==' ')) printf("%s",t);
            else printf("%s",s);
            i=i+n;}
            else i=i+j;
        }

    }
    return 0;
}
