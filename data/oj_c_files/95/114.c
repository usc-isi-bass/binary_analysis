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
	int l,i;
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	if(strlen(s1)>=strlen(s2))l=strlen(s1);
	else l=strlen(s2);
	for(i=0;i<=l;i++)
	{
		if(s1[i]>=97&&s1[i]<=122)s1[i]-=32;
		if(s2[i]>=97&&s2[i]<=122)s2[i]-=32;
		if(s1[i]>s2[i])
		{
			puts(">");return 0;
		}
		else if(s1[i]<s2[i])
		{
			puts("<");return 0;
		}
	}
	puts("=");return 0;
}