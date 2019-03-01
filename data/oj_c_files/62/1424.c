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
	int t,i=0;
	char *p,c;
	p=(char*)malloc(100*sizeof(char));
	for(;(c=getchar())!='\n';)
	{
		if(c!=' ')
		{
			*(p+i)=c;
			i++;
			t=0;
		}
		if(c==' '&&t==0)
		{
			*(p+i)=c;
			i++;
			t++;
		}
	}
	*(p+i)='\0';
	printf("%s",p);
	free(p);
}