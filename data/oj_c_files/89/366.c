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
	int n;int a[50000];int b[50000];int i;
	for(i=0;i<50000;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	cin>>n;
	int m,p;
	for(i=0;i<50000;i++)
	{
		cin>>m>>p;
		if(m==0&&p==0)
			break;
		if(m!=p)
		{
		a[m]=1;
		}
		b[p]=b[p]+1;
	}
	for(i=0;i<n;i++)
	{
		
		if(a[i]==0&&b[i]>=n-1)
		{
			cout<<i<<endl;
			return 0;
		}

	}
	cout<<"NOT FOUND"<<endl;
	return 0;
}