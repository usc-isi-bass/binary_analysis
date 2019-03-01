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


int sum[50];
int i;

int main()
{
	void digui(int x, int y);
	int n;
	int j[50],m[50];


	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		scanf("%d",&m[i]);
		sum[i]=0;
		for (j[i]=2;j[i]*j[i]<=m[i];j[i]++)
		{
			if(m[i]%j[i]==0)
			{
				sum[i]++;
				digui(j[i],m[i]/j[i]);
			}
		}
		printf("%d\n",sum[i]+1);
	}

	return 0;
}

void digui(int x, int y)
{
	int s;
	for(s=x; s*s<=y; s++) 
	{
		if(y%s==0) 
		{
			sum[i]++;
			digui(s,y/s);
		}
	}
}
