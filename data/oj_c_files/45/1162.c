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
	char zfc[MAX],word[MAX];
	int i,j,Match;
	scanf("%s%s",zfc,word);
	for(i=0; word[i]!='\0'; i++)
	{
		Match=0;
		for(j=0;zfc[j-1]!='\0';j++)
		{
			if(zfc[j]=='\0')
			{
				Match=1;
				break;
			}

			if(zfc[j]!=word[i+j])
			{
				break;
			}
		}

		if(Match==1)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}