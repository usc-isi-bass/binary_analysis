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
	char *str, *substr,*p,*q,*max,*string;
	int i,j,l1,l2;
	str=(char *)calloc(15,sizeof(char));
	substr=(char *)calloc(5,sizeof(char));
	while(scanf("%s%s",str,substr)!=EOF)
	{
	l1=strlen(str);
	l2=strlen(substr);
	max=str;
	for(p=str;p-str<l1;p++)
	{
		if(*p>*max)
			max=p;
	}
	string=(char *)calloc(15,sizeof(char));
	for(p=str,i=0;p<=max;p++,i++)
		*(string+i)=*p;
	for(p=substr;p-substr<l2;p++,i++)
		*(string+i)=*p;
	for(p=max+1;p-str<l1;p++,i++)
		*(string+i)=*p;
	puts(string);
	}
}


