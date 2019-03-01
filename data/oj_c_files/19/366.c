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
	char *s,*a,*b,*word;
	int i,j=0,flag=0;
	s=(char*)malloc(100*sizeof(char));
	a=(char*)malloc(100*sizeof(char));
	b=(char*)malloc(100*sizeof(char));
	word=(char*)malloc(100*sizeof(char));
	gets(s);
	gets(a);
	gets(b);
	i=0;
	while(*(s+i))
	{
		if (*(s+i)==' ')
		{
			if (flag!=0) printf(" ");
			flag=1;
			*(word+j)='\0';
			j=0;
			if (strcmp(word,a)==0)	printf("%s",b);
			else printf("%s",word);
		}
		else 
		{
			*(word+j)=*(s+i);
			j++;
		}
		i++;
	}
	*(word+j)='\0';
	if (flag!=0) printf(" ");
	if (strcmp(word,a)==0)	printf("%s",b);
	else printf("%s",word);
	
}