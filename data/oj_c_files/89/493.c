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
    int c,d,e,f,i,n;
    c=0;
    int a[100000],b[100000],p[100000]={0},q[100000]={0};
    scanf("%d",&n);
    for(i=0;i<=(n*(n-1)/2);i++)
    {
                          scanf("%d %d",&a[i],&b[i]);
                          if(a[i]==0&&b[i]==0) 
                          {d=(i-1);}
                          if(a[i]==0&&b[i]==0) break;
    }
    for(i=0;i<=(n-1);i++)
    {
                          for(f=0;f<=d;f++)
                          {
                                 if(a[f]==i)
                                 p[i]=1;
                          }
    }
    for(i=0;i<=(n-1);i++)
    {
                          for(f=0;f<=d;f++)
                          {
                                 if(b[f]==i)
                                 q[i]++;
                          }
    }
    for(i=0;i<=(n-1);i++)
    {
                          if(p[i]==0&&q[i]==(n-1))
                          {printf("%d",i);
                          c=1;}
    }
    if(c==0)
    {printf("NOT FOUND");}
    getchar();
    getchar();
    getchar();
}
