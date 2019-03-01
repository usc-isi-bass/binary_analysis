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
    int m=1,a,b,c,i,n,j;
    float x,sum;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
                     scanf("%d",&n);
                     a=1;b=1;sum=0;j=1;
                     while(j<=n)
                     {
                                c=a+b;
                                a=b;
                                b=c;
                                x=(float)b/a;
                                sum=sum+x;
                                j=j+1;
                                }
                                printf("%.3f\n",sum);
                                }
                                                          return 0;
                                }
                                