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

int elm[100]={0};
int counts=0,num=0;
void Try(int b,int s)
{
	int j;
	for(j=2;j<=num;j++)
	{
		if(j>=elm[s-1])
		{
			if(b%j==0)
			{
				elm[s]=j;
				if(b/j==1)
					counts++;
				else if(b/j<j)
					continue;
				else
					Try(b/j,s+1);
			}
		}
	}
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		counts=0;
		cin>>num;
		Try(num,1);
		cout<<counts<<endl;
	}
	return 0;
}
