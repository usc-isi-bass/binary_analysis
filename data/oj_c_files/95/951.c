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
	char comp(char s1[], char s2[]);
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	printf("%c\n", comp(s1, s2));
}
char comp(char s1[], char s2[])
{
	int i;
	for(i=0; s1[i]!='\0'&&s2[i]!='\0'; i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
			s1[i]+=32;
		if(s2[i]>='A'&&s2[i]<='Z')
			s2[i]+=32;
		if(s1[i]==s2[i]) continue;
		if(s1[i]<s2[i])
			return '<';
		else
			return '>';
	}
	if(strlen(s1)==strlen(s2))
		return '=';
	else if(strlen(s1)<strlen(s2))
		return '<';
	else
		return '>';
}