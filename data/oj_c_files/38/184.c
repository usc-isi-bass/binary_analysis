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
    double num[10000],sum,s;
    int n,m;
    int i,j,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&m);
                     for(j=1,sum=0;j<=m;j++)
                     {
                                      scanf("%lf",num+j);
                                      sum+=*(num+j);
                     }
                     sum/=m;
                     for(j=1,s=0;j<=m;j++)
                     {
                                          s+=d(*(num+j)-sum);
                     }
                     s/=m;
                     s=sqrt(s);
                     if(flag==1)
                     printf("\n");
                     flag=1;
                     printf("\n%.5lf",s);
    }
   // getch();
    return 0;
}
    
