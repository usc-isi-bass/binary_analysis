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
    char s[1000][1000],p[1000][1000];
    int n,i,j,m[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        m[i]=strlen(s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m[i];j++)
        {
            if(s[i][j]=='A')
            {
                p[i][j]='T';
            }
            if(s[i][j]=='T')
            {
                p[i][j]='A';
            }
            if(s[i][j]=='C')
            {
                p[i][j]='G';
            }
            if(s[i][j]=='G')
            {
                p[i][j]='C';
            }
            p[i][m[i]]='\0';
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",p[i]);
    }
    return 0;
}
