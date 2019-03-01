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
	char str[1000];
	int n,i,p=0;
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		for(;str[i]==' ';i++);
		n=0;
		for(;str[i]!=' '&&str[i]!='\0';i++)
		{
			n++;
		}
		p++;
		if(p!=1)
			printf(",");
		printf("%d",n);

	}
	printf("\n");
}

