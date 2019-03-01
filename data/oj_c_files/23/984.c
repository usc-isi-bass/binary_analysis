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

char a[100];
int i,j,lenth;
char *flag1,*flag2;
char *start=a;
char *move;


void print()
{
	char *p;
	if(move!=start)
	{
		for(p=flag1+1;p<flag2;p++)
			printf("%c",*p);
		printf(" ");
	}

	else
	{for(p=flag1;p<flag2;p++)
	printf("%c",*p);}
}

void main()
{
	gets(a);

	lenth=strlen(a);
	move=a+lenth-1;

	for(flag1=move+1;move>=start;move--)
	{
		if(*move==' '||move==start)
		{
			flag2=flag1;
			flag1=move;
			print();
		}

			
	}

}