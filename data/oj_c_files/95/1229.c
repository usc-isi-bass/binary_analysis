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
	char s1[81],s2[81];
	int i,n,m;

	gets(s1);
	gets(s2);
	n=strlen(s1);
	m=strlen(s2);
	if(n<m)
		n=m;

	for(i=0;i<n;i++)
		if(s1[i]!=s2[i]&&s1[i]-s2[i]!=32&&s2[i]-s1[i]!=32)break;

	if(i>=n)
		printf("=\n");
	else
	{
		if(s1[i]<'a')
			s1[i]=s1[i]+32;
		if(s2[i]<'a')
			s2[i]=s2[i]+32;

		if(s1[i]>s2[i])
			printf(">\n");
		else
			printf("<\n");
	}
}
