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

int pd(int i)
{
	if(i%7==0) return 0;
	while(i!=0)
	{
		if(i%10==7) return 0;
		i/=10;
	}
	return 1;
}
int main()
{
	int i,j,n,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(pd(i))
		sum+=i*i;
	}
	cout<<sum<<endl;
	return 0;
}
