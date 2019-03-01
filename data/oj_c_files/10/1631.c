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
	int h[40];
	int num[40];
	int n;
	cin>>n;
	for(int i=0;i!=n;++i)
		cin>>h[i];
	memset(num,0,sizeof(num));
	num[0]=1;
	for(int i=1;i<n;++i)
	{
		int maxi=1;
		for(int j=i-1;j>=0;--j)
		{
			if(maxi<num[j]+1 && h[j]>=h[i])
				maxi=num[j]+1;
		}
		num[i]=maxi;
	}
	int temp=0;
	for(int i=0;i!=n;++i)
	{
		if(num[i]>temp)
			temp=num[i];
	}
	cout<<temp<<endl;
	return 0;
}