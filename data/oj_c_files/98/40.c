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
	int n,i,j,k,len[8000],sum=0,a;
	char str[8000][40];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
		len[i]=strlen(str[i]);
	}
	for(j=0;j<(n-1);j++)
	{
		sum=sum+len[j];
		if(sum<=80)
			printf("%s",str[j]);
	

		a=sum+len[j+1];
		if(a<80)
		{
			printf(" ");
			sum++;
		}
		if(a>=80)
		{
			printf("\n");
			sum=0;
		}
	}
    if(a<=80)
		{
			printf("%s",str[n-1]);
		}
		if(a>80)
		{
			printf("\n");
			printf("%s",str[n-1]);
		}


	return 0;
}





