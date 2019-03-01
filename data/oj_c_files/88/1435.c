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
	int i;
	char a[30]={'\0'};
	gets(a);
	for(i=0;i<30;i++)
	{
		if(a[i]<=57&&a[i]>=48)
		{
			printf("%c", a[i]);
		}
		else 
		{if(a[i-1]>=48&&a[i-1]<=57&&a[i]!='\0')
		    {printf("\n");}
		 else 
			{if(a[i]=='\0') break;
			 else continue;}
		}
	}
	return 0;
}