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
    int n,t,i=0,j;
    int d[50];
    int a[50];
    int m;
    scanf("%d",&n);
    t=n;
    while(t--)
    scanf("%d",&d[i++]);
    a[0]=1;
    m=1;
    for(j=1;j<n;j++)
    {
                    a[j]=1;
                    }
                    for(j=1;j<n;j++)
                    {
                                    for(i=0;i<j;i++)
                                    {
                                                    if(d[i]>=d[j])
                                                    {if(a[i]+1>a[j])
                                                    a[j]=a[i]+1;
                                                    }
                                                    }
                                                    if(a[j]>m)
                                                    m=a[j];}
                                                    printf("%d\n",m);
                                                    getchar();getchar();getchar();
                                                    
                                                    }
    
    
