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
	int a[10000],b[10000];
	int n;
	int i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=b[i]=0;
	}
	while(cin>>i>>j)
	{
		if(i==0&&j==0) break;
		b[i]=1;
		a[j]++;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==0&&a[i]==n-1) 
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}

