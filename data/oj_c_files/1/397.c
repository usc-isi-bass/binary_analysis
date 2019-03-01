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

int numcount=0;
void divide(int num,int x)
{
	int i;
	if(num==1)
		numcount++;
	for(i=x;i<=num;i++)
	{
		if(num%i==0)
			divide(num/i,i);
	}
}

int main()
{
	int n,num,i;
	int first=2;
	int ans[100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>num;
		divide(num,first);
		ans[i]=numcount;
		//cout<<count<<endl;
		numcount=0;
	}
	for(i=1;i<=n;i++)
		cout<<ans[i]<<endl;
	return 0;
}
