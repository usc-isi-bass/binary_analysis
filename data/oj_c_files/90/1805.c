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

int all(int m,int n)
{
    int empty(int m,int n);
    int noempty(int m,int n);
    int sum;    
    sum=empty(m,n)+noempty(m,n);
    return(sum);
}
int empty(int m,int n)
{
    int s1;
    if(n==1)
    s1=0;
    else
    s1=all(m,n-1);
    return(s1);
    }
int noempty(int m,int n)
{
    int s2;
    if(m-n<0)
    s2=0;
    else if(m-n==0)
    s2=1;
    else 
    s2=all(m-n,n); 
    return(s2);
}
int main()
{
    int m,n,i,t,a[100],b[100];
    scanf("%d",&t);
     for(i=0;i<t;i++)
     scanf("%d%d",&a[i],&b[i]);
     for(i=0;i<t;i++)
     {
                     printf("%d\n",all(a[i],b[i]));
     }
return 0;
}

     