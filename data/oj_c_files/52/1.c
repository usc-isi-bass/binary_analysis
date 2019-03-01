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


void main()
{
	int i,m,n;
	int zz[1000];
	cin>>n>>m;
	for(i=m;i<m+n;i++)
		cin>>zz[i];
	for(i=n;i<m+n;i++)
		zz[i-n]=zz[i];
	for(i=0;i<n-1;i++)
		cout<<zz[i]<<" ";
	cout<<zz[n-1]<<endl;

}