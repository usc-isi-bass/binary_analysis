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
	int n,i,length=0;
	char word[41];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&word);
		if(i==0)
			printf("%s",word),length=strlen(word);
		else
		{
				length+=(strlen(word)+1);
				if(length>80)
					printf("\n%s",word),length=strlen(word);
				else
					printf(" %s",word);
		}
	}
	return 0;
}
