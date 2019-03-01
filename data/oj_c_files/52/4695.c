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
	int m,n,i,j;cin>>n>>m;int a[n];
	for (i=0;i<n;i++) cin>>a[i];
	const int *p[n],*q[m];//???????????
	for (i=0;i<n;i++) p[i]=&a[i];
	for (j=n-m;j<n;j++) q[j-n+m]=&a[j];//????
	for (i=0;i<m;i++) cout<<*q[i]<<' ';
	for (j=0;j<n-m-1;j++) cout<<*p[j]<<' ';cout<<*p[n-m-1]<<endl;//?????????????????
	return 0;
}
