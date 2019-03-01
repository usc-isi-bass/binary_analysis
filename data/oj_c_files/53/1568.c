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
	int a[21];
	int i,j,k,n,m,dd;
	for (i=0;i<=21;i++)
	{a[i]=0;}
	cin>>n;
	dd=0;
	for (i=1;i<=n;i++)
	{
	  cin>>k;
	  if (a[k]==0)
	  {
	      if (dd==1) cout<<',';
		  dd=1;
		  cout<<k;
		  a[k]=1;
	  }
	}
	return 0;

}