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
	int i,n,sum=0,m;
	char word[40];
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		scanf("%s",word);
		m=strlen(word)+1;
		sum=sum+m;
		if((sum>81)||(i==1))
		{
			printf("\n");
			sum=m;
			printf("%s",word);
		}
		else
		    printf(" %s",word);
	}
	printf("\n");
}