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

main()
{
    char s[500];
    int n,i,j=2,k,m;
    scanf("%s",s);
    n=strlen(s);
    for(;j<=n;j++)
    {
        if(j%2) m=(j+1)/2;
        else m=j/2;
        for(k=0;k<=n-j;k++)
        {
            for(i=k;i<=m+k-1;i++)
            {
                if(s[i]!=s[j+2*k-1-i]) break;
            }
            if(i==m+k)
            {
                for(i=k;i<=j+k-1;i++) printf("%c",s[i]);
                printf("\n");
            }
        }
    }
}