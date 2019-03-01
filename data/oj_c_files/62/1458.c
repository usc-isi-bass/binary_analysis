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
	char *str,*p;
	int n,k,i;
	str=(char*)malloc(100*sizeof(char));
	gets(str);
	p=str;
	n=strlen(str);
	k=n;
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=' ')
		{
			printf("%c",*(p+i));
		}
		if(*(p+i)==' '&&*(p+i+1)!=' ')
		{
			printf(" ");
		}
	}
	return 0;
}
			
