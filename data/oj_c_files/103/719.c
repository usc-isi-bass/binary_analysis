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
	char str[1000];
	int i,k=1;
	scanf("%s",&str);
	for(i=0;i<=999;i++)
	{
		if(str[i]<='z'&&str[i]>='a')
			str[i]=str[i]-32;
	}

	for(i=0;i<999;i++)
	{
		if(str[i+1]=='\0')
		{
			printf("(%c,%d)",str[i],k);
			break;
		}

		else if(str[i]==str[i+1])
		{
			k++;
		}
		else if(str[i]!=str[i+1])
		{
			printf("(%c,%d)",str[i],k);
			k=1;
		}
	}
}