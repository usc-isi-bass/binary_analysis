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
	int i,n=1,max,second=-1;
	int num=0;
	int a[300];
	char c;
	i=0;
	while((c=getchar())!='\n')
	{
		if(c==',')
		{
			a[i]=num;
			num=0; 
			i++;	
			n++;
		}
		else
		{
			num=num*10+c-'0';
		}
	}
	a[i]=num;
	max=a[0];
	for(i=1;i<=n-1;i++)
	{
		if(max<a[i])
		{
			second=max;
			max=a[i];
		}
		else if(second<a[i]&&a[i]<max)
		{
			second=a[i];
		}
	}
	if(n==1||second==-1)
		printf("No\n");
	else printf("%d\n",second);
	return 0;
}

