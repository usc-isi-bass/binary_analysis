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
	char s1[100],s2[100];
	int i,j;

	scanf("%s%s",s1,s2);
	if(strlen(s1)!=strlen(s2))
	{
		printf("NO\n");
		return;
	}
	
	for(i=0;i<(int)strlen(s1);i++)
	{
		for(j=0;j<(int)strlen(s2);j++)
		{
			if(s1[i]==s2[j])
			{
				s2[j]=-1;
				break;
			}
		}

		if(j>=(int)strlen(s2))
		{
			printf("NO");
			return;
		}	
	}
	printf("YES\n");
}
