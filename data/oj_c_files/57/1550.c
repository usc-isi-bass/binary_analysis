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
	int n,i,a;
	char word[50][100];
	char*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&word[i]);
	}
	for(i=0;i<n;i++)
	{
		for(p=word[i];*p!='\0';p++)
		{
		    if(*p=='e'&&*(p+1)=='r'&&*(p+2)=='\0')
			{
				*p='\0';
			}
			else if(*p=='l'&&*(p+1)=='y'&&*(p+2)=='\0')
			{
				*p='\0';
			}
			else if(*p=='i'&&*(p+1)=='n'&&*(p+2)=='g'&&*(p+3)=='\0')
			{
				*p='\0';
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",word[i]);
	}
	return 0;
}

