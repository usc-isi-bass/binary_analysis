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
	int n,k,a;
	cin>>n>>k;
	for(int i=1;;i++)
	{
		int t;
		a=n*i+k;
		for(t=0;t<n;t++)
		{
			if(a%(n-1)==0)
			{
				a=a*n/(n-1)+k;continue;
			}
			else
				break;
		}
		if(t==n-1)
		{	cout<<a;
		break;}
		else
			continue;
	}
	return 0;
}