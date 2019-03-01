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

int a,n,sum=0;
void t(int m)
{
	int i,j;
	for(i=m;i<=a;i++)
	{
		if(a%i==0)
		{
			a=a/i;
			if(a==1)
			{
				sum+=1;
			}
			else t(i);
				a=a*i;
		}
	}
}

int main()
{
	int k;
	cin >> n;
	for(k=0;k<n;k++)
	{
		sum=0;
		cin >> a;
		t(2);
		cout << sum << endl;
	}
	return 0;
}