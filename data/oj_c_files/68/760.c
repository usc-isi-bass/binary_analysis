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
    int n,i,j,k,t,m;
	float a,b;
	scanf("%d",&n);
	for (m=6;m<=n;m++)
	{	if (m%2==0)
	{  printf("%ld=",m);
		for (i=3;i<=m-3;i++)
		{	a=sqrt(i);
		  for (k=2;k<=a;k++)
			  if (i%k==0) break;
		  if(k>a)
		  {   t=m-i;
		      b=sqrt(t);
		      for (j=2;j<=b;j++)
				  if (t%j==0) break;
			if (j>b)
			{	printf("%d+%d\n",i,t);
			break;}
		  }
		  }
	}
	
}
}