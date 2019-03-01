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
    int i;
	char s1[101]={'\0'},s2[101]={'\0'};
	gets(s1);
	for(i=0;*(s1+i+1)!='\0';i++)
		*(s2+i)=*(s1+i)+*(s1+i+1);
	*(s2+i)=*(s1+i)+*s1;
	puts(s2);
	return 0;
}
