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
	int n,a[6],i,b[6];
	cin>>n;
	for(i=1;i<=5;i++)
	{
		b[i]=(int)n/pow(10*1.0,(5-i)*1.0);
		a[i]=b[i]%10;

	}
	for(i=1;i<=5;i++)
	{
		if(a[6-i]!=0)
		cout<<a[6-i];
	}
	cout<<endl;
	return 0;
}
	