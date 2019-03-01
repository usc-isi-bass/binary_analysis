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
	int n=0,i,l;
	char t,word[101],*p;
	gets(word);
	l=strlen(word);
	word[l]='\0';
	for(i=0;i<l;i++)
		if(word[i]==' ')
			word[i]='\0';
	p=word+l-1;
	while(p!=word)
	{
		if(*p=='\0')
		{
			printf("%s ",p+1);
		}
		p--;
	}
	printf("%s\n",p);
}