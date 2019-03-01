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
	char str[300];
	int i,j,n=0,num[300]={0};
	gets(str);
	//printf("%d",num[97]);
	for(i=97;i<=122;i++)
		for(j=0;str[j]!='\0';j++)
		{
			if(str[j]==i)num[i]++;
		}
	for(i=97;i<=122;i++)
	{
		if(num[i]!=0)n++;
	}
	for(i=97;i<=122;i++)
	{
		if(n==0)
		{
			printf("No");
			break;
		}
		else if(num[i]==0)continue;
		else printf("%c=%d\n",i,num[i]);
	}
}