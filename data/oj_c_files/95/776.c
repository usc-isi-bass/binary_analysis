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

void ast(char s[])
{
	int n,i;
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]>='a'&&s[i]<='z')
			s[i]=s[i]-32;
}
void main()
{
	char s1[50],s2[50];
	gets(s1);
	gets(s2);
	ast(s1);
	ast(s2);
	if(strcmp(s1,s2)>0)
		printf(">");
	else if(strcmp(s1,s2)<0)
		printf("<");
	else printf("=");
}