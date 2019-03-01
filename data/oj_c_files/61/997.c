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

int feibonaqishulie(int a)
{
	int b,a1,a2,i;
	a1=a2=1;
	if(a==1|a==2) b=1;
	else
		for(i=2;i<a;i++)
		{
			b=a1+a2;
			a1=a2;
			a2=b;
		}
	return(b);
}
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		cout<<feibonaqishulie(a)<<endl;
	}
	return 0;
}