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
	int x,y;
	cin>>x>>y;
	int a[12]={0},i,j,b[12]={0},point;
	a[0]=x;
	b[0]=y;
	for (i=1;i<12;i++)
	{
		a[i]=a[i-1]/2;
		b[i]=b[i-1]/2;
	}
	for (i=11;i>=0;i--)
		for (j=11;j>=0;j--)
			if (a[i]==b[j]) point=a[i];
	cout << point << endl;
	return 0;
}
