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

void into(char x[],char y[])
{
	int l,i,m=0,k=0;
	char a[10]={'\0'};
	l=strlen(x);
	for(i=1;i<l;i++) { if(x[i]>x[m]) m=i; }
	for(i=m+1;i<l;i++) { a[k++]=x[i]; x[i]='\0'; }
	strcat(x,y);
	strcat(x,a);
}
void main()
{
	int d;
	for(d=0;d<10;d++)
	{
		char str[14]={'\0'},substr[4]={'\0'};
		scanf("%s%s",str,substr);
		into(str,substr);
		puts(str);
	}
}
	
