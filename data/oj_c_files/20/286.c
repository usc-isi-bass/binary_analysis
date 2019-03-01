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
	char str[11],substr[3],*p,*max;

	
	while(scanf("%s %s",str,substr)!=EOF){
	for(p=str,max=p;*p!='\0';p++)
	{
		if(*p>*max)
			max=p;
	}
	for(p=str;p<=max;p++)
		printf("%c",*p);
	printf("%s",substr);
	for(p=max+1;*p!='\0';p++)
		printf("%c",*p);
	printf("\n");}
}