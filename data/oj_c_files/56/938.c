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
	char s[5],t;
	int i,n;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		t=s[n-i-1];
		s[n-i-1]=s[i];
		s[i]=t;
	}
	for(i=0;i<n;i++)
	printf("%c",s[i]);
}