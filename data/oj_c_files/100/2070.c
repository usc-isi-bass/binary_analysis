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
	char a[300];
	int b[53]={0},c[53]={0};
	gets(a);
	int i,j,len,flag=0;
	len=strlen(a);
	for(i=1;i<=26;i++)
	{
		for(j=0;j<len;j++)
		{
			if(a[j]==i+64)
				c[i]+=1;
		}
	}
	for(i=27;i<=52;i++)
	{
		for(j=0;j<len;j++)
		{
			if(a[j]==i+70)
				c[i]+=1;
		}
	}
	for(i=1;i<=26;i++)
	{
		if(c[i]!=0)
		{
			printf("%c=%d\n",i+64,c[i]);
			flag=1;
		}
	}
	for(i=27;i<=52;i++)
	{
		if(c[i]!=0)
		{
			printf("%c=%d\n",i+70,c[i]);
			flag=1;
		}
	}
	if(flag==0)
		printf("No");
	return 0;
}