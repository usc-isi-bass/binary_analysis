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

int a[300]={0};
int N;
void main()
{
	char c;
	int i=0;
	while((c=getchar())!='\n')
	{
		if(c>='0'&&c<='9')
			a[i]=10*a[i]+c-'0';
		else
			i++;
	}
	N=i+1;
	if(N==1)
		printf("No");
	else
	{
		int max=0;
		for(i=0;i<N;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		for(i=0;i<N;i++)
		{
			if(a[i]==max)
				a[i]=0;
		}
		max=0;
		for(i=0;i<N;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		if(max!=0)
			printf("%d",max);
		else
			printf("No");
	}
}