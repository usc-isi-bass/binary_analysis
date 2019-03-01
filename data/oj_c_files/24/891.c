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
	int minPos = 0, maxPos = 0, tmpPos = 0;
	int minLen = LENGTH, maxLen = 0, tmpLen = 0;

	gets(allwords);

	int len = strlen(allwords);

	for(i = 0; i < len+1; i++)
	{

		if(allwords[i] == ' ' || allwords[i] == '\0')
		{
			if(tmpLen > maxLen)
			{
				maxPos = tmpPos;
				maxLen = tmpLen;
			}
			if(tmpLen < minLen)
			{
				minPos = tmpPos;
				minLen = tmpLen;
			}
			allwords[i] = '\0';
			tmpLen = 0;
			tmpPos = i + 1;
		}
		else
		{
			tmpLen++;
		}
	}

	printf("%s\n", allwords + maxPos);
	printf("%s\n", allwords + minPos);


	return 0;
}