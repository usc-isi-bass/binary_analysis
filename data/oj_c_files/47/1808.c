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
	int n;
	cin>>n;
	int c[100];
	for(int i=1;i<=n;i++)
		{
			int a;
			cin>>a;
			c[n-i]=a;
	}
	for(int t=1;t<=(n-1);t++)
	cout<<c[t-1]<<' ';
	cout<<c[n-1];
	
	return 0;
}