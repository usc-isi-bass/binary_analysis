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
    char s[51],w[51];
    scanf("%s%s",s,w);
    int m,n,t;
    m=strlen(s);
    n=strlen(w);
    for(int i=0;i<n-m+1;i++)
    {
        t=0;
        for(int j=0;j<m;j++)
        {
            if(s[j]!=w[i+j]) {t=1;break;}
        }
        if(t==0) {printf("%d\n",i);break;}
    }
}