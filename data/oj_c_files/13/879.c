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
	int n,i,a[20001],x=0,t,m;
	memset(a,0,sizeof(a));
		  cin>>n;
		  cin>>m;
		  cout<<m;
		  a[m]=1;
	for(i=2;i<=n;i++)
	{
		cin>>t;
	if(a[t]!=1)
	{
		cout<<" "<<t;
		a[t]=1;
	}
	}
	return 0;
}
