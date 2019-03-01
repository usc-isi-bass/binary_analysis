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
	int a[21],i,n;
	a[0]=1;
	a[1]=1;
	cin>>n;
	for(i=1;i<20;i++)
	{
		a[i+1]=a[i]+a[i-1];
	}
	while(cin>>i)
	{
		cout<<a[i-1]<<endl;
	}
	return 0;
}