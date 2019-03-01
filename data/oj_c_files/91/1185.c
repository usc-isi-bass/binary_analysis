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

char s1[100],s2[100];
int main()
{
	int i,j,k,d;
	gets(s1);
	d=strlen(s1);
	for(i=0;i<d-1;i++)
	{
		*(s2+i)=*(s1+i)+*(s1+i+1);
	}
	*(s2+d-1)=*(s1+d-1)+*s1;
	puts(s2);
	return 0;
}