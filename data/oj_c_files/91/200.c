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
	char *org;
	org=(char*)malloc(100*sizeof(char));
	gets(org);
	int i,n,d;
	n=strlen(org);
	for(i=0;i<n-1;i++)
	{
		
		d=*(org+i)+*(org+i+1);
		printf("%c",d);
	}
	d=*(org+i)+*org;
	printf("%c\n",d);
}

		
