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

/*???????????????*/

int main()
{
	int n,m,i,t,j;
	int a[100];
	cin>>n;
	for(i=0;i<=n-1;i++)cin>>a[i];/*??*/
	for(i=0;n-1-i>i;i++)/*???????????*/
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=t;
	}
	for(i=0;i<=n-2;i++)cout<<a[i]<<' ';/*??*/
	cout<<a[n-1]<<endl;
	return 0;
}