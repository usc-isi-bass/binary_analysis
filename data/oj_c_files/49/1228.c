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
    char s[501];
    gets(s);
    int i,a,b,t,l,n,j;
    n=strlen(s);
    for(l=1;l<n;l++)
        for(i=0;i<n-l;i++)
        {
            a=i;b=i+l;t=0;
            while(s[a]==s[b]&&a<b) {a++;b--;};
            if(a>=b)
            {
                for(j=i;j<=i+l;j++) printf("%c",s[j]);
                printf("\n");
            }
        }
}

