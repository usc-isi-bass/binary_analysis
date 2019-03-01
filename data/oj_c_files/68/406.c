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

void main()
{
	int n,i,j,k,r,m,s,p;
	scanf("%d",&n);
	for(p=6;p<=n;p=p+2)
	{for(j=2;j<=p;j++)
	{
	 k=sqrt(j); 
	 i=2;
	 if(j%i==1)
	 {for(i=3;i<=k;i=i+2)
	 {if(j%i==0) break;}}
	 if(i>=k+1)
	 {m=p-j;
	  s=sqrt(m);
	  r=2;
	  if(m%r==1)
	  {
	   for(r=3;r<=s;r=r+2)
	   {if(m%r==0) break;}
	  }
	  if(r>=s+1) break;}}
	 printf("%d=%d+%d\n",p,j,m);}
	  
}