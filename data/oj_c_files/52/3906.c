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
	int n,m,i,g[100];
	int *p;
	cin>>n>>m;
	for(i=0;i<n;i++)
		cin>>g[i];
	for(p=&g[n-1]-m+1;p<=&g[n-1];p++)
		cout<<*p<<" ";
	for(p=&g[0];p<&g[n-1]-m;p++)
		cout<<*p<<" ";
         cout<<*p;
	return 0;
}