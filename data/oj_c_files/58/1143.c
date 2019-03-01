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

int pd(char *p)
{
    if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_')
	{
		for(p=p+1;*p!='\0';p++)
		{
			if(*p>='a'&&*p<='z'||(*p>='A'&&*p<='Z')||(*p>='0'&&*p<='9')||*p=='_') ;
			else break;
		}
		if(*p=='\0')  return(1);
		else return(0);
	}
	else return(0);
}
void main()
{
	int i,n;
	char *p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		p=(char*)malloc(1000*sizeof(char));
		gets(p);
		printf("%d\n",pd(p));
	}
}
