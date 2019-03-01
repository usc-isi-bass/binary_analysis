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
	char letter1[100],letter2[100],*le1,*le2;
	le1=letter1;
	le2=letter2;
	scanf("%s %s",le1,le2);
	int _break;
	if(strlen(letter1)==strlen(letter2))
	{
		for(;*le1!='\0';le1++)
		{
			le2=letter2;
			_break=0;
			for(;*le2!='\0';le2++)
			{
				if(*le1==*le2)
				{
					*le2='0';
					_break=1;
					break;
				}
			}
			if(_break==0)
			{
				printf("NO\n");
				_break=2;
				break;
			}
		}
		if(_break!=2)
			printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}
	