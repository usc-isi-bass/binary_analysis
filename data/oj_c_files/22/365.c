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
	char string[1500];
	int num[350];
	int i,j=0,max=0,max2=0;
	gets(string);
	for(i=0;i<=349;i++) num[i]=0;
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]!=',') num[j]=num[j]*10+string[i]-'0';
		else j++;
	}
	for(i=0;i<=j;i++)
	{
		if(num[i]>max)
		{
			max2=max;
			max=num[i];
		}
		else if(num[i]>max2&&num[i]<max)
			max2=num[i];
	}
	if(max2==0) printf("No\n");
	else
	printf("%d\n",max2);
}
