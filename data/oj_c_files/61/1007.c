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
	int f[100],s[100],n,i;
	cin >>n;
	int a,b;
	a=1;
	b=1;
    f[0]=a;
    f[1]=b;
	for( i=0;i<n;i++)
	{
		cin >>s[i];
	}
	for(int j=2;j<100;j++)
	{
		f[j]=f[j-1]+f[j-2];
	}
	for( i=0;i<n;i++)
	{
		a=s[i];
		cout <<f[a-1]
		<<endl;
	}
	return 0;
}

