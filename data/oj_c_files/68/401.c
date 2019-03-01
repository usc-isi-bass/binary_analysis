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

main()
{
	int e,i,j,k,r,t,s,n,m;
	scanf("%d",&e);
	for(i=6;i<=e;i=i+2)
	{	j=3;
	 for(;j<=i;j=j+2)
	 {  k=3;m=sqrt(j);
	    for(;k<=m;k=k+2)
	   { r=j%k;
	   if(r==0) break;}
	   if(k>m)
	   {t=i-j;s=3;n=sqrt(t);
	   for(;s<=n;s=s+2)
	   {  r=t%s;
	      if(r==0) break;}
	   if(s>n) {printf("%d=%d+%d\n",i,j,t);
	   break;}}
	  }
	}
}
	   

	   