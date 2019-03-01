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

int fun(int m,int n,int j);
int main()
{
     int s,i,x;
     int m[100],n[100];
     scanf("%d",&x);
     for(i=0;i<x;i++)
    {
     scanf("%d%d",&m[i],&n[i]);
    }
     for(i=0;i<x;i++)
     {
     if(n[i]>m[i])
     n[i]=m[i];
     s=fun(m[i],n[i],0);
     printf("%d\n",s);
     }
}
int fun(int m,int n,int j)
{
    int i,s=0;
    if(n==1) return m>=j;
    for(i=j;i<m;i++) s+=fun(m-i,n-1,i);
return s;
}
