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

int ysf(int n,int m)
{
int i,s,k;
s=0;
for(i=2; i<=n; i++) 
s=(s+m)%i;
k=s+1;
return(k);
}
void main()
{
  int n,m,i,j,a[100];
  m=1;n=1;i=0;
   while(m!=400)
   {
    scanf("%d %d",&n,&m);
    if(m==0) break;
    a[i]=ysf(n,m);
    i++;
   }
   for(j=0;j<i;j++)
    printf("%d\n",a[j]);
}
    
