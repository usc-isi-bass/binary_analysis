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
	char *s1,*s2;
	int i,len;
	s1=(char*)malloc(100*sizeof(char));
	s2=(char*)malloc(100*sizeof(char));
	gets(s1);
	len=strlen(s1);
	for(i=0;i<len-1;i++)
		*(s2+i)=*(s1+i)+*(s1+i+1);
		*(s2+len-1)=*(s1)+*(s1+len-1);
		for(i=0;i<len;i++)
			printf("%c",*(s2+i));
}