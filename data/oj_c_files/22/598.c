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
	int num[300],i,j;
	int max1,max2;
	char c;
	i=0;
	do
	{
		scanf("%d",&num[i]);
		scanf("%c",&c);
		i++;
	} while (c==',');
	max1=num[0];
	max2=0;
	for (j=0;j<i;j++)
	{
		if (num[j]>max1)
		{
			max2=max1;
			max1=num[j];
			continue;
		}
		if (num[j]==max1) continue;
		if (num[j]>max2)
		{
			max2=num[j];
		}
	}
	if (max2==0) printf("No");
	else printf("%d",max2);
}