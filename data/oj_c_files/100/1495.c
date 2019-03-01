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
	int i,j,sum[123]={0},m=0,q;
	char*c=(char*)malloc(sizeof(char)*301);
	for(i=0;i<=301;i++)
	{
		scanf("%c",&c[i]);
		if(c[i]=='\n') 
		{
			q=i;
			break;
		}
	}
	for(j=65;j<=90;j++)
	{
	    for(i=0;i<q;i++)
		{
		    if((int)c[i]==j) sum[j]++;
		}
		if(sum[j]!=0)
		{
			printf("%c=%d\n",j,sum[j]);
			m++;
		}
		else continue;
	}
	for(j=97;j<=122;j++)
	{
	    for(i=0;i<q;i++)
		{
		    if((int)c[i]==j) sum[j]++;
		}
		if(sum[j]!=0)
		{
			printf("%c=%d\n",j,sum[j]);
			m++;
		}
		else continue;
	}
	if(m==0) printf("No");
	free(c);
}