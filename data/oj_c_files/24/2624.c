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
	int n,i,max,min;
	char s[200][50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	max=strlen(s[0]);
	min=strlen(s[0]);
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])>max)
			max=strlen(s[i]);
		if(strlen(s[i])<min)
			min=strlen(s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])==max)
		{
			printf("%s\n",s[i]);
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])==min)
		{
			printf("%s",s[i]);
			break;
		}
	}
	return 0;
}