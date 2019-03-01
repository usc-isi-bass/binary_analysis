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


void change(char s[],int i);

void main()
{
	char s[6];
	int i;
	gets(s);
	for(i=0;i<6;i++)
	if(s[i]=='\0')break;
	change(s,i);
}

void change(char s[],int i)
{
	if(i==1)putchar(s[0]);
	else
	{
		printf("%c",s[i-1]);
		change(s,i-1);
	}
}