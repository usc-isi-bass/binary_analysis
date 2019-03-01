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
	int m,n,a,b;
	float s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a=2;b=1;s=0;
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			s+=((float)a)/b;
			a+=b;
			b=a-b;
		}
		printf("%.3f\n",s);
	}
	return 0;
}
