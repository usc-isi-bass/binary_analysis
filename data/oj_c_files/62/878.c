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
	char zfc[500];
	gets(zfc);
	int i,k,LEN;
	LEN=strlen(zfc);
	for(i=0;i<LEN-1;i++)
	{
		if(zfc[i]==' '&&zfc[i+1]==' ')
		{
			for(k=i+1;k<LEN-1;k++)
			{
				zfc[k]=zfc[k+1];
			}
			i=i-1; zfc[LEN-1]='\0';
		}
		
		LEN=strlen(zfc);
	}
	
	puts(zfc);
	return 0;
}