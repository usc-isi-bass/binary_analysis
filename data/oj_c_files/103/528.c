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
	char zfc[1002]={0},t;
	scanf("%s",zfc);
	int i,sum=0,n=strlen(zfc),m='A'-'a';
	for(i=0;i<n;i++)
	{
		if(zfc[i]>='a'&&zfc[i]<='z')
		{
			zfc[i]+=m;
		}
	}
	t=zfc[0];
	for(i=0;i<=n;i++)
	{
		if(zfc[i]!=t)
		{
			printf("(%c,%d)",t,sum);
			sum=1;
			t=zfc[i];
		}
		else
		{
			sum++;
		}
	}
	return 0;
 }
