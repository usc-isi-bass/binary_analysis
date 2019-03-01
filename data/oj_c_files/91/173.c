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
	int n,i;
    char *s1=(char*)malloc(101*sizeof(char));
    char *s2=(char*)malloc(101*sizeof(char));
    gets(s1);
    n=strlen(s1);
	for(i=0;i<n-1;i++)
		*(s2+i)=*(s1+i)+*(s1+i+1);
	*(s2+n-1)=*(s1+n-1)+*(s1);
	*(s2+n)='\0';
	puts(s2);
}