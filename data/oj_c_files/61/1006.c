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


int main() {
	int m,x,a=1,b=1,k1,k2,n;//m??????? a?an-1 b?an-2 x?an k???  n??n??
	cin >>m;
	for (k1=1;k1<=m;k1=++k1)
	{	cin >>n;
		a=1;b=1;
		if(n==1) cout<<1<<endl;
		if(n==2) cout<<1<<endl;
		if(n>=3)
		{for (k2=3;k2<=n;++k2)
			{x=a+b;
			b=a;
			a=x;}
		cout <<x<<endl;}}
	return 0;
}