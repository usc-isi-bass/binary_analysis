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


int prime(int num)
{
	int i;
	for (i=2;i*i<=num;i++)
	{
		if (num%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n,i,small;
	cin>>n;
	cout<<"6=3+3";
	for (i=8;i<=n;i=i+2)
	{
		for (small=2;2*small<=i;small++)
		{
			if (prime(small)==1&&prime(i-small)==1)
			{
				cout<<endl<<i<<'='<<small<<'+'<<i-small;
				break;
			}
		}
	}
	return 0;
}