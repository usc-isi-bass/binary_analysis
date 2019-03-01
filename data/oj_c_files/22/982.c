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
	static int a[300];
	int i,max=0,cmax=0;
	scanf("%d",&a[0]);
	for(i=1;getchar()==',';i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<300;i++)
	{
		if(a[i]>max)
			max=a[i];
	}

	for(i=0;i<300;i++)
	{
		if((a[i]!=max)&&(a[i]>cmax))
			cmax=a[i];
	}
	if(cmax==0)
		printf("No\n");
		else
	printf("%d",cmax);
	return 0;
}