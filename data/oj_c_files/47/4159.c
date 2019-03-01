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
	int i,n,x,a[100];
	cin >>n;
	for(i=1;i<=n;i++)
		cin >>a[i];
	for(i=1;i<=n/2;i++)
	{
		x=a[i];
		a[i]=a[n-i+1];
		a[n-i+1]=x;
	}
	for(i=1;i<=n-1;i++)
		cout <<a[i]<<" ";
	cout <<a[n];
	return 0;
}
