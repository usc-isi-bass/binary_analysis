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
	char s1[255],s2[255];
	int i,t;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]&&s2[i];i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
			s1[i]=s1[i]-'a'+'A';
		}
		if(s2[i]>='a'&&s2[i]<='z')
		{
			s2[i]=s2[i]-'a'+'A';
		}
		if(s1[i]!=s2[i])
		{
			printf((s1[i]>s2[i])?">":"<");
			break;
		}
	}
	t=strcmp(s1,s2);
	if(t==0)
		printf("=");
}
