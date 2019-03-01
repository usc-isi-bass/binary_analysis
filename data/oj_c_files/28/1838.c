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
	char ch;
	int len = 0,tag=0;
	while((ch = getchar()))
	{
		if((ch == ' '||ch=='\n') && len)
		{
			if(tag)
				printf(",");
			printf("%d", len);
			len = 0;
			tag=1;
			if(ch=='\n')
				break;
		}
		else if(ch!= ' ')
			len++;
	}
	printf("\n");
	return 0;
}