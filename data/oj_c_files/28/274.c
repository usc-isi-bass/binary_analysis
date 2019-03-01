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
	char *temp,s[1000];
	int p=0;
	gets(s);
	temp=s;
	for(temp=s;*temp!='\0';temp++)
	{
		if(*temp==' ') {if(p>0) printf("%d,",p);p=0;}
		else p++;
	}
	printf("%d",p);
}
		

