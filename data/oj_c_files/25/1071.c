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
	int n,i,j,num[2000];
	memset(num,0,sizeof(num));
	num[1999]=2;
	cin>>n;
	if(n==0)
	{
		cout <<"1" << endl;return 0;
	}
	else
	{
		for(i=1;i<n;i++)
		{	
			for(j=0;j<2000;j++)
			{
				num[j]=2*num[j];
				if(num[j]>=10)
				{
					num[j]=num[j]-10;
					num[j-1]++;
				}
			}
		}
	}
	i=0;
	while(num[i]==0)
	{
		i++;
	}
	for(;i<2000;i++)
		cout <<num[i];
	cout << endl;
	return 0;
}

			
