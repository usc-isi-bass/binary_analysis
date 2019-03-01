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

int daodan[30];
int res[30];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>daodan[i];
		res[i]=1;
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-1;j>i;j--)
		{
             if(daodan[i]>=daodan[j])
				 res[i]=max(res[i],res[j]+1);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(res[i]>res[0])
		res[0]=res[i];
	
	}
	cout<<res[0]<<endl;
	return 0;
}
