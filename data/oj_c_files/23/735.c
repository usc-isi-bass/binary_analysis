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

int main ()
{
    char str[100];
	int n,i,a,j;
	gets(str);
	n=strlen(str);
	a=n-1;
	for(i=n-1;i>0;i--)
		if(str[i]==' ') 
		{
			for(j=i+1;j<=a;j++)
				printf("%c",str[j]);
			    printf("%c",str[i]);
			a=i-1;
		}
	for(i=0;i<a+1;i++)
		printf("%c",str[i]);
}