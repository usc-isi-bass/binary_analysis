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
	char str[100 +1];
	int i , j , flag ,length ,l;
	flag = 0;

	gets(str);
	length = strlen(str);
	for(i = 0 ; i <= length - 1; i ++)
	{
		if(str[i] == ' ')
		{
			if(flag == 1)
			{
				for( j = i ; j <= length - 1 ; j ++)
					str[j - 1] = str[j];
				length --;
				i --;
			}
			else
				flag = 1;
		}
		else 
			flag = 0;
	}
	for(i = 0 ; i <= length - 1; i ++)
		printf("%c",str[i]);
	return 0;
}

			






