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

int f(char a[])
{
	int i,l,l0,b=0;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(b<a[i])
		{
			b=a[i];
			l0=i;
		}
	}
	return(l0);
}
void main()
{
	char s1[11],s2[4],s[14];
	int j,i,l,l0;
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		l=strlen(s1);
		l0=f(s1);
		for(i=0;i<=l0;i++)
			s[i]=s1[i];
		for(j=0,i=l0+1;j<3;j++,i++)
			s[i]=s2[j];
		for(j=l0+1,i=l0+4;j<=l;j++,i++)
			s[i]=s1[j];
		printf("%s\n",s);
	}
}