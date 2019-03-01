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

int main(int argc, char* argv[])
{ 
	char a[80],b[80];
	gets(a);
	gets(b);
	int i,la,lb;
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<la;i++)
	{
		if(a[i]<'a'&&a[i]>='A')
			a[i]=(char)a[i]+32;
	}
	for(i=0;i<lb;i++)
	{
		if(b[i]<'a'&&b[i]>='A')
			b[i]=(char)b[i]+32;
	}
	if(strcmp(a,b)>0)
		printf(">");
	else if(strcmp(a,b)==0)
		printf("=");
    else if(strcmp(a,b)<0)
		printf("<");

	return 0;
}
