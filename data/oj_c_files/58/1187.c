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
	char(*p)[81];
	int n;
	scanf("%d\n",&n);
	p=(char(*)[81])malloc(n*sizeof(char[81]));
	char (*head)[81];
	head=p;
	int i;
	for(i=0;i<n;i++)
	{
		gets(*p);
		p++;
	}
	p=head;
	for(i=0;i<n;i++)
	{
		if(**p=='_'||(**p>='a'&&**p<='z')||(**p>='A'&&**p<='Z'))
		{
			char *al=*p;
			while(*al!='\0')
			{
			   if(!((*al>='0'&&*al<='9')||(*al>='a'&&*al<='z')||(*al>='A'&&*al<='Z')||(*al=='_')))
			   {
				   printf("0\n");
				   break;
			   }
			   al++;
			}
			if (*al=='\0') printf("1\n");
		}
		else
			printf("0\n");
		p++;
	}
	return 0;
}