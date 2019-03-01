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
	int n;cin>>n;
	int num[1001]={0};
	num[1000]=1;
	int i,j;
	while(n--)
	{
		for(i=1000;i>0;i--)
			num[i]=num[i]*2;
		for(i=1000;i>0;i--)
		{
			if(num[i]>=10)
			{
				num[i]=num[i]-10;
				num[i-1]=num[i-1]+1;
			}
		}
	}
	for(i=0;i<=1000;i++)
	{
		if(num[i]!=0)
		{
			for(j=i;j<=1000;j++)
				cout<<num[j];
			break;
		}
	}
	
	return 0;
}