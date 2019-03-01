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

void process(char *pt,int number)
{
	char *b,head;
	head=*pt;
	for(b=pt;b<pt+number-1;b++)
	{
		*b=*b+*(b+1);
	}
	*(pt+number-1)=*(pt+number-1)+head;
	for(b=pt;b<pt+number;b++)
	{
		printf("%c",*b);
	}
}
	
int main()
{
	char A[101];
	char *pt;
	int number;
	gets(A);
	number=strlen(A);
	pt=A;
	process(pt,number);
	return 0;
}