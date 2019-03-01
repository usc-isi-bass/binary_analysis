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
	char str[150],from[150],to[150],a[50];
	char *p=str;
	int i;
	gets(str);
	gets(from);
	gets(to);
	
	
	while(*p){
	for (i=0;*p!=' '&&*p!='\0';p++,i++)
	{
       a[i]=*p;
	}
	a[i]='\0';
	if(strcmp(a,from)==0)
		printf("%s",to);
	else printf("%s",a);
	if(*p)
	{
		printf(" ");
		p++;
	}
	}



    return 0;
}