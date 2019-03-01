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
	char d;
    while((d=getchar())!=EOF)
	{
		printf("%c",d);
		if(d==' ')
		{
			for(;;)
			{
				if((d=getchar())==' ')continue;
				else 
				{
                    printf("%c",d);
					break;
				}
			}
		}
	}
	return 0;
}