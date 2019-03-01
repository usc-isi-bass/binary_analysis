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
	char s1[100],s2[100];
	int i;
	int a,b;
	gets(s1);
	gets(s2);
	a=strlen(s1);
	b=strlen(s2);
	for(i=0;i<a;i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
			s1[i]=s1[i]-'a'+'A';
	}
    for(i=0;i<b;i++)
	{
		if(s2[i]>='a'&&s2[i]<='z')
			s2[i]=s2[i]-'a'+'A';
	}
	if(strcmp(s1,s2)>0)
		printf(">");
    if(strcmp(s1,s2)<0)
		printf("<");
    if(strcmp(s1,s2)==0)
		printf("=");
	return 0;
}


		