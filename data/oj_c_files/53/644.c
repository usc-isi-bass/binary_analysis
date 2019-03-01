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
    int n,a[300],*p[300],i,j,k,m;
	scanf("%d",&n);
	p[0]=a;
	for(i=0;i<=n-1;i++)
	{scanf("%d",p[0]+i);}
    for(i=1,j=1;i<=n-1;i++)
	{
      for(k=0;k<=j-1;k++)
	  {if(a[i]==*p[k])
	  {m=0;break;}
	  else
	  m=1;}
	  if (m)
	  {p[j]=p[0]+i;j++;}
	}
	for(i=0;i<=j-2;i++)
	{printf("%d,",*p[i]);}
	printf("%d",*p[j-1]);
}