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
    int a[300],b,c,d,i,j,m,k,n;
    scanf("%d%d",&m,&n);
    while(m!=0&&n!=0)
    {
                 
     for(i=0;i<m;i++)
   {  a[i]=0;}
     i=0;
     j=0;
     for(b=0;j<m;b=(b+1)%m)
   {
    if(a[b]==0)
     {i++;}
     if(i==n)
     {i=0;
     j++;
     a[b]=j;}

}
  if(b==0)
          b=m;
 
     printf("%d\n",b);
     scanf("%d%d",&m,&n);}
    return 0;}