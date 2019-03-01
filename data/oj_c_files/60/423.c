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
 int n,b=-1,i,j,t,m=0,a[10000];
 scanf("%d",&n);
 for(i=3;i<=n;i++)
 {
 	t=1;
    for(j=2;j*j<=i;j++)
      if(i%j==0)
      {t=0;break;}
	if(t==1)
	{b++;a[b]=i;}    	
 }
 for(i=0;i<b;i++)
   if(a[i+1]-a[i]==2)  {m=1;printf("%d %d\n",a[i],a[i+1]);}
 if(m==0)  printf("empty");
}