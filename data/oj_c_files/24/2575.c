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
	int n,i,j;
	int max=0,min=100;
	char s[250][250];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(strlen(s[i])>max) max=strlen(s[i]);
		if(strlen(s[i])<min) min=strlen(s[i]);
	}
	for(j=0;j<n;j++)
	{
		if(strlen(s[j])==max)
		{
			printf("%s\n",s[j]);
			break;
		}
	}
	for(j=0;j<n;j++)
	{
		if(strlen(s[j])==min) 
		{
			printf("%s\n",s[j]);
			break;
		}
	}
	return 0;
}