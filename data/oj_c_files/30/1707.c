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
	int a,j,n,k,b,sum;
	cin>>n;
	sum=0;
	for(j=1;j<=n;j++)
	{
		b=0;
		k=j;
		while(j>0)
		{
			a=j%10;
			j=j/10;
			if(a==7)
				b=1;
		}
		if(k%7==0)
			b=1;
		if(b==0)
			sum+=k*k;
		j=k;
	}
	cout << sum <<endl;
	return 0;
}

