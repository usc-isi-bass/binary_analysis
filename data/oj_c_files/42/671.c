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
	int a[100000];
	int num,del,i,j;
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&del);
	for(i=0;i<num;i++)
	{
		if(a[i]==del)
		{
			for(j=i;j<num;j++)
			{
				a[j]=a[j+1];
			}
			num--;
			i--;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<num;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}
