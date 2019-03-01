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
	char s1[101]={'\0'},s2[101]={'\0'};
	int l,i;
	gets(s1);
	l=strlen(s1);
	for(i=0;i<=l-2;i++)
		s2[i]=s1[i]+s1[i+1];
	s2[l-1]=s1[0]+s1[l-1];
	printf("%s",s2);
}