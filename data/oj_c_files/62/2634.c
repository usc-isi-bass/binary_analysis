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
	char a[10000];
	int n,i,j,k;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		
		if((a[i]==' ')&&(a[i-1]==' '))
		{
			continue;
		}
		else 
		{
			printf("%c",a[i]);
		}
	}


	
	
	
	return 0;
}