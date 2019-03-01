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
	int a[120],b[120],i,n,m;
	cin>>n>>m;
	for(i=1;i<=n;i++)//??????
		cin>>a[i];
   int *p1=&a[1];
	for(i=1;i<=n-m;i++,p1++)//??m???????
		b[m+i]=*p1;
	for(i=1;i<=m;i++)//??n-m???????
		b[i]=a[n-m+i];
		int *p=&b[1];
	for(i=1;i<n;i++,p++)
	cout<<*p<<" ";//??????????
	cout<<*p;
	return 0;
}
