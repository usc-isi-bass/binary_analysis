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
	int i,n;
	char *p;
	p=(char*)malloc(100*sizeof(char));
	gets(p);
	n=strlen(p);
	if((*p)>47&&(*p)<58)
		printf("%c",*p);
	for(i=1;i<n;i++)
	{
		if((*(p+i)>47&&*(p+i)<58)&&(*(p+i-1)<48||*(p+i-1)>57))
			printf("\n");
		if(*(p+i)>47&&*(p+i)<58)
			printf("%c",*(p+i));
	}
		
	
}