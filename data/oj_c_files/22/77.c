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

void main()
{
	long int a[300];
	char c[300];
	int i,num,max,imax,t=0;
	scanf("%d",&a[0]);
	scanf("%c",&c[0]);
	for(i=1;c[i-1]==',';i++)
		scanf("%d%c",&a[i],&c[i]);
	num=i;
	if(num==1)
		printf("No\n");
	else
	{
		max=a[0];
	for(i=0;i<num;i++)
		if(a[i]>max)
			max=a[i];
	imax=0;
	for(i=0;i<num;i++)
		if(a[i]>imax&&a[i]<max)
		{
			imax=a[i];
			t=1;
		}
		if(t==1)
		printf("%d",imax);
		else
			printf("No\n");
	}

}