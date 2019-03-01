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

int main(int argc, char* argv[])
{
	int n,i,j,m;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	  double A[1000],sum=0,a,b=0,s,S;
	  scanf("%d",&m);
	  for(j=0;j<m;j++)
	  {
	    scanf("%lf",&A[j]);
		sum=sum+A[j];
	  }
	  a=(double)(sum/m);

	  for(j=0;j<m;j++)
	  {
	     b=b+(A[j]-a)*(A[j]-a);
	  }
	  s=(double)b/m;
	  S=sqrt(s);
	  printf("%.5lf\n",S);
	}
	return 0;
}

