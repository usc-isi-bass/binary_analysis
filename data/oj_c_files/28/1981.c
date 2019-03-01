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
    char a[1000];
    gets(a);
    int n=1;
    int c=strlen(a);
    int sz[n],sz1[n];
    sz[0]=-1;
    for (int i=1;a[i]!='\0';i++)
    {
         if(a[i]==' ')
         {
             sz[n]=i;
             n++;
         }
    }
    sz[n]=c;
    for(int i=0;i<=n;i++)
    {
        sz1[i]=sz[i+1]-sz[i]-1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(sz1[i]>0&&sz1[i]<10000)
        {
            printf("%d,",sz1[i]);
        }
    }
    printf("%d",sz1[n-1]);
    return 0;
}