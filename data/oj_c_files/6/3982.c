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
	int num;
	int x[100][100];
	int a,b;
	int sum;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>a>>b;
		for(int j=0;j<100;j++)
		{
			for(int k=0;k<100;k++)
			x[j][k]=0;
		}
		sum=0;
		for(int j=0;j<a;j++)
		{
			for(int k=0;k<b;k++)
			{
				cin>>x[j][k];
				if(j==0||j==a-1)
				{
					sum+=x[j][k];
				}
				else
				{
					if(k==0||k==b-1)
					sum+=x[j][k];
				}
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
