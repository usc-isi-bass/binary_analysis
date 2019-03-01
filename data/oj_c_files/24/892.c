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
	char allwords[WORD*LENGTH];

	int i;
	//int minPos = 0, maxPos = 0, tmpPos = 0;
	char *minP, *maxP, *tmpP;
	int minLen = LENGTH, maxLen = 0, tmpLen = 0;

	gets(allwords);

	int len = strlen(allwords);

    minP = &allwords[0];
	maxP = &allwords[0];
	tmpP = &allwords[0];

	for(i = 0; i < len + 1; i++)
	{
		if(allwords[i] == ' ' || allwords[i] == '\0')
		{
			if(tmpLen > maxLen)
			{
				maxP = tmpP;
				maxLen = tmpLen;
			}
			if(tmpLen < minLen)
			{
				minP = tmpP;
				minLen = tmpLen;
			}
			allwords[i] = '\0';
			tmpLen = 0;
			tmpP = &allwords[i + 1];
		}
		else
		{
			tmpLen++;
		}
	}

	printf("%s\n", maxP);
	printf("%s\n", minP);


	return 0;
}