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
	int n,i,a;
	char word[20],*p;

	scanf("%d",&n);
	while(n>0)
	{
		scanf("%s",word);
		a=strlen(word);
		p=word+a-1;
		if(*(p-1)=='e'&&*p=='r')
		{
			*(p-1)='\0';
			printf("%s\n",word);
		}
		else if(*(p-1)=='l'&&*p=='y')
		{
			*(p-1)='\0';
			printf("%s\n",word);
		}
		else if(*(p-2)=='i'&&*(p-1)=='n'&&*p=='g')
		{
			*(p-2)='\0';
			printf("%s\n",word);
		}
         n--;
	}
}