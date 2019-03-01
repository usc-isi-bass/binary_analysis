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
	int i,x,n;
	char str[10000],c;
	gets(str);
	n=strlen(str);
	x=0;
	for(i=0;i<=n;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			while(str[i+1]==' ')
				i++;
			printf("%d",x);
			if(str[i]!='\0')
			{	printf(",");
			x=0;}
		}
		else
			x=x+1;
	}
	return 0;
}