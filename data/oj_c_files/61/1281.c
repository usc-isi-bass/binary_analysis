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

int a[201];
void ni(int m)
{
	if(m==202)
		return;
	a[m]=a[m-1]+a[m-2];
	ni(m+1);
}
int main()
{
	a[0]=1;
	a[1]=1;
	ni(2);
	int n,i,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		cout<<a[k-1]<<endl;
	}
	return 0;
}