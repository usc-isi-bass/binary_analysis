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
	int n,i,t=1;
	char *p;
	p=(char*)malloc(1000*sizeof(char));
	gets(p);
	n=strlen(p);
	for(i=0;i<n;i++)
	{
		if((*(p+i)>='0')&&(*(p+i)<='9'))
		{
			printf("%c",*(p+i));
			t=0;
		}
	    else if(t==0)
		{
			printf("\n");
			t++;
		}
	}
}
		