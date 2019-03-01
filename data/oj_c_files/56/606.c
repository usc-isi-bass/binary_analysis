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
	char s1[5],s2[5];
	int i,t;
	scanf("%s",s1);
	t=strlen(s1);
	for(i=0;i<t;i++)
	{
		s2[i]=s1[t-i-1];
	printf("%c",s2[i]);
	}
}
