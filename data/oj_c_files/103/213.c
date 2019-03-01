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
	char str[1000];
	scanf("%s",str);
	char charCurrent ,charNext;
	charCurrent = charNext = toupper(str[0]);
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++)
	{
		charCurrent = toupper(str[i]);
		if(str[i + 1] == '\0')
		{
			if(charCurrent == charNext)
				count++;
			break;
		}	
		charNext = toupper(str[i + 1]);
		if(toupper(str[i + 1]) == toupper(str[i]))
		{
			count++;
		}
		else
		{
			printf("(%c,%d)",charCurrent,count + 1);
			count = 0;	
		}
	}
	printf("(%c,%d)",charCurrent,count);
	return 0;
}