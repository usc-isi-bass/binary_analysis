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
	char s1[80],s2[80];
	int i,c;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			s1[i]+=32;
		}
		if(s2[i]>='A'&&s2[i]<='Z')
		{
			s2[i]+=32;
		}
	}
	c=strcmp(s1,s2);
	if(c==0)
	{
		printf("=");
	}
	else if(c>0)
	{
		printf(">");
	}
	else{printf("<");}
	return 0;
}