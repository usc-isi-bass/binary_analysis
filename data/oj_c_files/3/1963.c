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
	int a[1000]={0},n,k,i,j,judge=0;//judge???????
	cin>>n>>k;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<(n-1);i++)//????????????????
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==k)
			{
				cout<<"yes";
				judge=1;
				break;
			}
		}
		if(judge)
			break;
	}
	if(judge==0)
		cout<<"no";
	return 0;
}
