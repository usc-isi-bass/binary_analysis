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

int main (  )
{
	int j,i,n,m;
	cin>>n;
	int sushu[9999];
	for(j=2;j<=n;j++)
	{
		for(i=2;i<=j;i++)
		{
			if(j%i==0)break;
		}
		if(i==j)sushu[j]=j;
	}
	for(m=2;m<=n/2;m++)
	{
		for(j=0;j<=n;j++)
		{
			if(m==sushu[j])for(i=0;i<=n;i++)
			{
				if((n-m)==sushu[i])
					cout<<sushu[j]<<" "<<sushu[i]<<endl;
			}
		}
	}
	return 0;
}
