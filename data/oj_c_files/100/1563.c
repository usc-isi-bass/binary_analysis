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
	char a[300],j,i;
	int m,p=0;
	scanf("%s",a);
	for(j='A';j<='Z';j++)
	{
		m=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==j)
			{
				m++;
			}
		}
		if(m!=0)
		{
			printf("%c=%d\n",j,m);
			p=1;
		}
		else{
			p=0;
		}
	}
    for(j='a';j<='z';j++)
	{
		m=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]==j)
			{
				m++;
			}
		}
		if(m!=0)
		{
			printf("%c=%d\n",j,m);
			if(p==0)
			{
				p=1;
			}
		}
		if(m==0)
		{
			if(p==1)
			{
				p=1;
			}
		}
	}
	if(p==0)
	{
		printf("No\n");
	}
	return 0;
}