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
	char a[100],c[100];
	gets(a);
	gets(c);
	int i,j;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
	}
	for(j=0;c[j]!='\0';j++)
	{
		if(c[j]>='A'&&c[j]<='Z')
			c[j]=c[j]+32;
	}
	if(strcmp(a,c)>0) {
		printf(">\n");
	}
	else if(strcmp(a,c)<0) {
		printf("<\n");
	}
	else {
		printf("=\n");
	}
	
	return 0;
}