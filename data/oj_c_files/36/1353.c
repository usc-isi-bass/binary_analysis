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
	int i,j,l;
	char s1[100],s2[100],t;
	scanf("%s %s",s1,s2);
	l=strlen(s1);
	for(j=0;j<l-1;j++)
	{
		for(i=0;i<l-1-j;i++)
		{
			if(s1[i]>s1[i+1])
			{
				t=s1[i];s1[i]=s1[i+1];s1[i+1]=t;
			}
		}
	}
	for(j=0;j<l-1;j++)
	{
		for(i=0;i<l-1-j;i++)
		{
			if(s2[i]>s2[i+1])
			{
				t=s2[i];s2[i]=s2[i+1];s2[i+1]=t;
			}
		}
	}
	if(strcmp(s1,s2)==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}



		
	
