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
    char s[20],w[50],a[50][20];
    scanf("%s%s",s,w);
    int l1=strlen(s),l2=strlen(w),i,j;
    for(i=0;i<=l2-l1;i++)
    {
        for(j=0;j<=l1-1;j++)
            a[i][j]=w[i+j];
        a[i][l1]='\0';
    }
    for(i=0;i<=l2-l1;i++)
    {
        if(strcmp(a[i],s)==0)
        { printf("%d",i);break;}
    }
   
}