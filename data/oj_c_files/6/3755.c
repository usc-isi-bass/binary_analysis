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
	int k,m,n,a[100][100];
	cin>>k;
	for(int i=0;i<k;i++)
	{
		int (*p)[100];
		p=a;
		int sum=0;
		cin>>m>>n;
		
		for(int j=0;j<m;j++)
		{
			for(int l=0;l<n;l++)
			{
				cin>>a[j][l];
			}
		}
		if(m!=1&&n!=1)
	 {
		for(int l=0;l<n;l++)
		{
			sum+=*(*p+l)+*(*(p+m-1)+l);
		}
		for(int j=1;j<m-1;j++)
		{
			sum+=*(*(p+j))+*(*(p+j)+n-1);
		}
		cout<<sum<<endl;
	}
		else
	{
		cout<<**p<<endl;
	}
 }
	
	return 0;
}


