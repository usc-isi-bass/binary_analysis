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
	int i,j;
	char a[80],b[80];
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-32;
	}
	for(j=0;b[j]!='\0';j++)
	{
		if(b[j]>='a'&&b[j]<='z')
			b[j]=b[j]-32;
	}
	if(strcmp(a,b)==0) printf("=");
	if(strcmp(a,b)>0) printf(">");
	if(strcmp(a,b)<0) printf("<"); 
	return 0;
}
