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
    int m,n,i,l=0,c;
    int a[1000];
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
                     int j,t,f=1,s,b;
                     b=i;
                     char e[40];
                     for(j=0;b!=0;j++)
                     {
                                      e[j]=b%10;
                                      b=b/10;
                     }
                     e[j]='\0';
                     for(t=0;t<j;t++)
                     {
                                     if(e[t]!=e[j-t-1])
                                     {
                                                       f=0;
                                                       break;
                                     }
                     }
                     if(f==1)
                     {
                             s=1;
                             int q;
                             for(q=2;q<i;q++)
                             {
                                             if(i%q==0)
                                             {
                                                       s=0;
                                                       break;
                                             }
                             }
                             if(s==1)
                             {
                                     a[l]=i;
                                     l++;
                             }
                     }
    }
    if(l==0)
    printf("no\n");
    else{
    for(c=0;c<l-1;c++)
    {
                      printf("%d,",a[c]);
    }
    printf("%d\n",a[l-1]);}
    getchar();
    getchar();
}