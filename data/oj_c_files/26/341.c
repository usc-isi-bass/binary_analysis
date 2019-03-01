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
	int i,j;
	char a[101];
	char d[101];
	char e[250];
	e[0]='\0';
	gets(a);
	strcat(a," ");
	for(i=0;a[i]!='\0';)
	{
		if(a[i]!=' ')
		{
			for(j=i;a[j]!=' ';)
				
			{
				d[j-i]=a[j];
				j++;
			}
			
			d[j-i]='\0';
			
			strcat(e,d);
			if(a[j+1]!='\0')
			{
				strcat(e," ");
			}
			i=j+1;
		}
		else
			i++;
		
	}
	puts(e);
	return 0;
}


