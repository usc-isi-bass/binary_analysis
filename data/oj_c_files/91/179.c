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
	int i,n;
	char *s1=(char*)malloc(100*sizeof(char));
	char *s=(char*)malloc(100*sizeof(char));
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	  *(s1+i)=(char)((int)(*(s+i))+(int)(*(s+i+1)));
	*(s1+n-1)=(char)((int)(*(s+n-1))+(int)(*(s+0)));
	for(i=0;i<n;i++)
	 printf("%c",*(s1+i));
}