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
	char a[200];
	int i,b;
	
	gets (a);
	b=strlen(a);
	

	for (i=0;i<b;i++)
	{
		if (a[i]!=' ')
			printf("%c",a[i]);
		else if(a[i]==' '&& a[i+1]==' ')
		{
			continue;
		}
		else
		{
			printf(" ");
		}
	}


	return 0;
}
