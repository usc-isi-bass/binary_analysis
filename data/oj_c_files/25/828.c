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
	int n,a[100]={0};
	cin >> n;
	if(n==0)
		cout<<1;
	else
	{
		a[0]=2;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<100;j++)
				a[j] *= 2;
			for(int j=0;j<100;j++)
			    if(a[j] >= 10)
				{
					a[j+1] +=1;
				    a[j] %= 10;
				}
		}
	    int k=99;
		while(a[k] == 0)
			k--;
		while(k>=0)
			cout<<a[k--];
	}
	return 0;
}