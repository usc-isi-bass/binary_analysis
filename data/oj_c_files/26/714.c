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
	char a[101],i;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		{
          printf("%c",a[i]);
		  continue;
		}
		else
		{
			printf(" ");
			while(a[i+1]==' ')
			 {
				 i=i+1;
			 }
		}
	}
	return 0;
}
