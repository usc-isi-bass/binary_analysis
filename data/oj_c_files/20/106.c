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
	void output(char a[11],char b[4]);
	int i;
	char a[11],b[4];
	for(i=0;scanf("%s %s",a,b)!=EOF;i++)  
	    output(a,b);
}

void output(char a[11],char b[4])
{
	int i,c=0,j;
	for(i=1;a[i]!='\0';i++)
	{
		if(a[c]<a[i])
			c=i;
	} 
	for(j=0;j<=c;j++)
	    	printf("%c",a[j]);
	   printf("%s",b);
	for(j=j;a[j]!='\0';j++)
	    	printf("%c",a[j]);
	printf("\n");
}
