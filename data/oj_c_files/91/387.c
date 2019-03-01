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
	char a[101]={'\0'},b[101]={'\0'};
	int i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i+1]!='\0')
		b[i]=a[i]+a[i+1];
		else
		b[i]=a[0]+a[i];
	}
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	printf("\n");
	
	return 0;
} 
