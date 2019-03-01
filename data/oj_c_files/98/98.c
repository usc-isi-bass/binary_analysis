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
	int n,i,l,L=0;
	char word[25];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		l=strlen(word);
		L+=(l+1);
		if(i==0)
			printf("%s",word);
		else
		{
			if(L>81)
				L=l+1;
			if(L!=(l+1))
				printf(" %s",word);
			else
				printf("\n%s",word);
		}
	}
	return 0;
}
