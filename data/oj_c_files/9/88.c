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
	int n,age[100],i,j;
	char id[100][11],str[11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",id[i],&age[i]);
	}
	for(i=110;i>=60;i--)
	{
		for(j=0;j<n;j++)
		{
			if(age[j]==i)
			{
				printf("%s\n",id[j]);
				age[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(age[i]!=0)
			printf("%s\n",id[i]);	
	}
	return 0;
}
