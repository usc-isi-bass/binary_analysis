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
	int i,max1=0,max2=0,a[300]={0},n=0,flag=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c<='9'&&c>='0')
		{
			a[n]*=10;
			a[n]+=c-'0';
		}
		if(c==',')
		{
			n++;
		}
	}
	n++;
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[0])
		{
			flag=1;
			break;
		}
	}
	if(n==1&&flag==1)
		flag=0;
	if(flag==0)
		printf("No");
	else
	{
		for(i=0;i<n;i++)
		{			
			if(a[i]>max1)
				max1=a[i];
		}
		for(i=0;i<n;i++)
		{	
			if(a[i]==max1)
				continue;
			if(a[i]>max2)
				max2=a[i];
		}
		printf("%d",max2);
	}
	return 0;
}
