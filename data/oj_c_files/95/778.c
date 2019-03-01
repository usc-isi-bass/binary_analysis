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
	char s1[80];
	char s2[80];
	gets(s1);
	gets(s2);
	int n1,n2;
	n1=strlen(s1);
	n2=strlen(s2);
	int i;
	for (i=0;i<n1;i++)
	{
		if (65<=s1[i]&&s1[i]<=90)
			s1[i]=s1[i]+32;
		else;
	}
	for (i=0;i<n2;i++)
	{
		if (65<=s2[i]&&s2[i]<=90)
			s2[i]=s2[i]+32;
		else;
	}
	if (strcmp(s1,s2)<0)
		printf("<");
	else if (strcmp(s1,s2)>0)
		printf(">");
	else printf("=");
}