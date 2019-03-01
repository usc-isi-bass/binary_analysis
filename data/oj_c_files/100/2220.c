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
	char c[300];
	int i,j,n,count,count1=0;
	gets(c);
	n=strlen(c);
	for(i=65;i<91;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i==c[j])
				count+=1;
		}
		if(count!=0)
		{
			printf("%c=%d\n\n",i,count);
			count1+=1;
		}
	}
	for(i=97;i<123;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i==c[j])
				count+=1;
		}
		if(count!=0)
		{
			printf("%c=%d\n\n",i,count);
			count1+=1;
		}
	}
	if(count1==0)
		printf("No\n");
}