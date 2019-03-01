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
	int N,a[501],i,m,j,b[501],p=1;//??????ab
	cin>>N;//??N
	for(i=1;i<=500;i++)//???ab??????-1
	{
		a[i]=-1;
		b[i]=-1;
	}
	for(i=1;i<=N;i++)//???????a?
	{
		cin>>a[i];
	}
	for(i=1;i<=N-1;i++)//???a??????????
	{
		for(j=1;j<=N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}

		}
	}
	for(i=1;i<=499;i++)//???a?????????b?
	{
		if(a[i]%2!=0&&a[i]!=-1)
		{
			b[p]=a[i];
			p=p+1;		
		}
	}
	for(i=1;i<=499;i++)//????????b????
	{
		if(b[i]!=-1&&b[i+1]!=-1)
		{
			cout<<b[i]<<",";
			m=i+1;
		}
	}
	cout<<b[m]<<endl;
	return 0;
}


