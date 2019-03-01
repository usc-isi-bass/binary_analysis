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
	int n,i,m=0;
	char word[41];
	scanf("%d",&n);
	scanf("%s",word);
	for(i=0;i<n;i++)
	{
		if(m==0)
		{
			printf("%s",word);
			m=m+strlen(word);
			scanf("%s",word);
		}
		else
		{
			if(m+strlen(word)+1>80)
			{
				printf("\n");
				m=0;
				i--;
			}
			else
			{
				printf(" %s",word);
				m=m+strlen(word)+1;
				scanf("%s",word);
			}
		}
	}
	return 0;
}

