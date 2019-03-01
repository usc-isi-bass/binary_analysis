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
	char s[50],w[50];
	char m,n;
	scanf("%s%s",s,w);
	int i;
	for(i=0;(m=s[i])!='\0';i++)
	{	
		for(i=0;(n=w[i])!='\0';i++)
			if(m==n) 
				printf("%d\n",i);
				break;
	}
	return 0;
}