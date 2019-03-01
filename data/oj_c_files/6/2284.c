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
	int k,m,n;
	cin>>k;
	while(k>0)
	{
		cin>>m>>n;
		int num[110][110]={0},(*p)[110],sum=0,i,j;
		p=num;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
			}
		}
		p=num;
		for(j=0;j<n;j++)
			sum=sum+*(*p+j);
		for(i=1;i<m;i++)
			sum=sum+*(*(p+i)+n-1);
		for(j=0;j<n-1;j++)
			sum=sum+*(*(p+m-1)+j);
		for(i=1;i<m-1;i++)
			sum=sum+*(*(p+i)+0);
		cout<<sum<<endl;
		k--;
	}
		return 0;
}



