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
	char temp;
	int c[1000],d[1000],i=0,j=0,t=0,k=0,count=0,max=0,sum;
	while(1)
	{
		cin >> c[i];
		temp=getchar();
			if(temp!=',')
				break;
			i++;
	}
	i=0;
	while(1)
	{
		cin >> d[i];
		temp=getchar();
			if(temp!=',')
				break;
			i++;
	}
	sum=i+1;
		cout << sum << " ";
	for(k=1;k<=1000;k++)
	{
		for(j=0;j<=sum-1;j++)
			if(c[j]<=k && d[j]>k)
				count++;
			if(count>max)
				max=count;
			count=0;
	}
	cout << max << endl;
	return 0;
}







