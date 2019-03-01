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


int count[10000];

int main()
{
	int i,j;
	int k;
	int num[1000];
	scanf("%d",&k);
	for(i=0; i<k; i++)
		scanf("%d", &num[i]);
	for(i=0; i<k; i++)
	{
		if(count[num[i]]==0)
		{
			count[num[i]]=1;
			printf("%d",num[i]);
			break;
		}
	}
	for(; i<k; i++)
	{
		if(count[num[i]]==0)
		{
			count[num[i]]=1;
			printf(",%d",num[i]);
		}
	}

	return 0;
}