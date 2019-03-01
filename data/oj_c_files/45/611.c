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
	int i, j=0, k, l1;
	char s1[26], s2[26];
	scanf("%s %s", s1, s2);
	l1=strlen(s1);
	for(i=0;s2[i];i++)
	{
		if(s1[0]==s2[i])
		{
			k=0;
			for(j=1;s1[j];j++)
			{
				if(s1[j]!=s2[j+i])
				{
					k=1;
				}
			}
			if(k==0)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}