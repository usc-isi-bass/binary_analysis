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
	int n,k,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char w[50];
		scanf("%s",w);
		k=strlen(w);
		if(w[k-1]=='g')
		{
			for(j=0;j<k-4;j++)
			{
				printf("%c",w[j]);
			}
			printf("%c\n",w[k-4]);
		}
		else
		{
			for(j=0;j<k-3;j++)
			{
				printf("%c",w[j]);
			}
			printf("%c\n",w[k-3]);
		}
	}
	return 0;
	
}
