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
	char a[100],b[100];
	int i=0;
	gets(a);
	gets(b);
	while(a[i]!='\0')
	{
		if(a[i]>=97)
			a[i]=a[i]-32;
                 i++;
	}
	i=0;
	while(b[i]!='\0')
	{
		if(b[i]>=97)
			b[i]=b[i]-32;
                i++;
	}
		if(strcmp(a,b)>0)
		printf(">");
		if(strcmp(a,b)<0)
		printf("<");
		if(strcmp(a,b)==0)
	    printf("=");
		return 0;
}