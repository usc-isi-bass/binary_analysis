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
	int length;
	char a[300];
	char zimu='a';
	int i,j;
	int cishu[26]={0},zero=0;

	scanf("%s",a);
	length=strlen(a);

	for(i=0;i<length;i++)
	{	zimu='a';
		for(j=0;j<26;j++)
		{
			if(a[i]==zimu)
			{
				cishu[j]++;
				break;
			}
			else
			{
				zimu++;
			}
			
			
				
			
		}
	}

	
	zimu='a';
	for(j=0;j<26;j++)
	{
		if(cishu[j]!=0)
		{		
			printf("%c=%d\n",zimu,cishu[j]);
		}

		zimu++;
	}

	for(j=0;j<26;j++)
	{
		if(cishu[j]==0)
		{
			zero++;
		}	
	}

	if(zero==26)
	{
		printf("No");
	}

	return 0;
}
