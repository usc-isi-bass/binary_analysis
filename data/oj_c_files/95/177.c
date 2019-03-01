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
	char a[30],b[30];
	int i,j,num1,num2;
	gets(a);
	gets(b);
	num1=strlen(a);
	num2=strlen(b);
	for(i=0;i<num1;i++)
	{	
		if(a[i]<='z'&&a[i]>='a')
		    a[i]-=32;
	}
    for(i=0;i<num2;i++)
	{	
		if(b[i]<='z'&&b[i]>='a')
		    b[i]-=32;
	}
		if(strcmp(a,b)>0)
			printf(">");
		else if(strcmp(a,b)<0)
			printf("<");
	    else
		printf("=");
	return 0;
}
        