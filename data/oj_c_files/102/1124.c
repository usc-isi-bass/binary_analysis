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
    char s[100][10],tmp[10];
    double h[100],tmp2;
    int n,i,j,first=1;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%s %lf",s[i],&h[i]);
    for (i=0;i<n-1;i++)
        for (j=0;j+i<n-1;j++)
            if (h[j]>h[j+1])
            {
               tmp2=h[j];
               h[j]=h[j+1];
               h[j+1]=tmp2;
               strcpy(tmp,s[j]);
               strcpy(s[j],s[j+1]);
               strcpy(s[j+1],tmp);
            }
    for (i=0;i<n;i++)
        if (s[i][0]=='m')
        {
           if (first==0)
              printf(" ");
           first=0;
           printf("%.2lf",h[i]);
        }
    for (i=n-1;i>=0;i--)
        if (s[i][0]=='f')
           printf(" %.2lf",h[i]);
    return 0;
}
