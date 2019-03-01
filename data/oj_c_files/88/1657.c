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
	char c[40];
	int i=0,flag=1;
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]>=48&&c[i]<=57)
		{
			printf("%c",c[i]);
		    flag=0;
		}
		else if(flag==0)
		{
			printf("\n");
			flag=1;
		}
		i++;
	}

	return 0;
}

