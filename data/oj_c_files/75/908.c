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
	int a[10000],i,j=0,temp=0,max=0;
	float c=0.5;
	for(i=0;i<10000;i++)
	{
		cin>>a[i];
		if(cin.get()=='\n')
			j++;
		if(j==2)
			break;
	}
	for(;c<=998.5;)
	{
		for(j=0;j<=(i-1)/2;j++)
		{
			if(a[j]<c&&a[(i+1)/2+j]>c)
				temp++;
		}
		if(temp>max)
			max=temp;
		temp=0;
		c++;
	}
	cout<<(i+1)/2<<" "<<max;
	return 0;
}
