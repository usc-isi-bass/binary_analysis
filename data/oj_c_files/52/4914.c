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

/*????*/
int main( )
{
	int n,m,i,a[101];
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	int *p=a,*q;
	/*???m??*/
	for(i=n-m+1;i<=n;i++)
	{
		q=(p+i);
		cout<<*q<<" ";
	}
	/*???n-m??*/
	for(i=1;i<n-m;i++)
	{
		q=(p+i);
		cout<<*q<<" ";
	}
	cout<<a[n-m];
	return 0;
}
