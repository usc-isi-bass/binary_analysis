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

void main()
{
	char str[10000];int i,sum=0,j;
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' '&&str[i-1]==' ')
		
		{
			sum++;
			for(j=i;j<strlen(str);j++) 
				*(str+j)=*(str+j+1);
			i--;
		}
	}
	for(i=0;i<strlen(str);i++)
		printf("%c",str[i]);

}