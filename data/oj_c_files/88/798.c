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
	int i,l,k=0,j;
	char *p,*a;
	a=calloc(30,sizeof(char));
	p=a;
	gets(p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(*(p+i)>=48&&*(p+i)<=57&&k==2) printf("\n");
		if(*(p+i)>=48&&*(p+i)<=57) {printf("%c",*(p+i));k=1;}
		else k=2;
	}
}