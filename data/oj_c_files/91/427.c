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
	char s[101]={0},s1[101]={0};
	int i,j,l;
    gets(s);
    l=strlen(s);
	for(i=0;i<l-1;i++)
	{
		*(s1+i)=*(s+i)+*(s+i+1);
		printf("%c",*(s1+i));
	}
    *(s1+l-1)=*(s+l-1)+*s;
	printf("%c",*(s1+l-1));

	}
