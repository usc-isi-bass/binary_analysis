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
	int a[300]={0},n=0,i,max=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c!=',')
			a[n]=a[n]*10+c-'0';
		else
			n++;
	}
	for(i=0;i<=n;i++)
		max=max>a[i]?max:a[i];
	for(i=0;i<=n;i++)
	{
		if(a[i]==max)
			a[i]=0;
	}
	max=0;
	for(i=0;i<=n;i++)
		max=max>a[i]?max:a[i];
	if((n==0)||(max==0))
		printf("No\n");
	else
		printf("%d\n",max);
}
