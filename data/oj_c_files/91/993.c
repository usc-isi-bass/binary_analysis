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
	char s[150],word[150]={'\0'};
	int k,m,n,i,j;
	char *point;
	gets(s);
	k=strlen(s);
	point=&s[0];
	for(i=0;i<=k-2;i++)
	{word[i]=*(point+i)+(*(point+i+1));}
	word[k-1]=s[0]+s[k-1];
	puts(word);
	return 0;
}