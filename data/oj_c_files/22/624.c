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
	int a[300]={0},i=0,j,l,m=0,n=0,t;
	scanf("%d",&a[0]);
	for(i=1;i<300;i++)
	{
		
		scanf(",%d",&a[i]);
		
	}
	t=0;
	for(i=0;i<300;i++)
	{
		m=0;l=10000;
		for(j=0;j<300;j++)
		{
			if(a[j]>a[i]&&a[j]!=l)
			{m++;l=a[j];}
		}
		if(m==1&&a[i]!=0)
		{	printf("%d",a[i]);t++;break;}
	}



	if(t==0)
		printf("No");
	return 0;
}