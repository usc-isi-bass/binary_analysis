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
	int m,n,t;
	cin>>t;
	while(t--)
	{
		int a[100][100],sum=0;
		cin>>m>>n;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>*(*(a+i)+j);    //????
			}
		}
		for(int i=0;i<m;i++)         //???????
		{
			if(n>1)                  //??????
				sum+=(**(a+i)+*(*(a+i)+n-1));
			else                     //????
				sum+=**(a+i);
		}
		for(int i=1;i<n-1;i++)
		{
			if(m>1)                  //????
				sum+=(*(*a+i)+*(*(a+m-1)+i));
			else                     //????
				sum+=*(*a+i);
		}
		cout<<sum<<endl;             //????
	}
	return 0;
}