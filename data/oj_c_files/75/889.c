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
	int x[1000]={0},y[1000]={0},time[1000]={0};
	int num=0,i=0,j=0;
	char s;
	while(1)
	{
		cin>>x[i++];
		s=getchar();
		if(s=='\n')
			break;
	}
	num=i;
	i=0;
	while(1)
	{
		cin>>y[i++];
		s=getchar();
		if(s=='\n')
			break;
	}
	cout<<num<<" ";
	for(i=0;i<num;i++)
	{
		for(j=x[i];j<y[i];j++)
		{
			time[j]++;
		}
	}
	int max=0;
	for(i=0;i<1000;i++)
	{
		if(time[i]>max)
			max=time[i];
	}
	cout<<max;
	return 0;
}