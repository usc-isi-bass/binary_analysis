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
	int a[300],max,sec,i,j;
	char b[300];
	for (i=0;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&b[i]);
		if (b[i]=='\n')
			break;
	}
	max=a[0];
	sec=-1;
	for(j=1;j<=i;j++)
	{
		if(a[j]>max)
		{
			sec=max;
			max=a[j];
		    
		}
		if(a[j]<max&&a[j]>sec)
		{
			sec=a[j];
		}
	}
	if(sec==-1)
		printf("No");
	else
		printf("%d",sec);
	return 0;
}
		
