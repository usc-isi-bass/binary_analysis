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
	char c[1000];
	int i,j,l;
	gets(c);
	l=strlen(c);
	for(i=0;i<=(l-1);i++)
		if((c[i]==32)&&(c[i+1]==32))
		{   i--;
			for(j=i+1;j<=(l-1);j++)
				{
					c[j]=c[j+1];
				}	
		}
	puts(c);
   return 0;




}