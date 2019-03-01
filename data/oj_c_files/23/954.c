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
	char str1[100];
	int n,i,j,a1,a2;
	gets(str1);
	n=strlen(str1);
    a1=n-1;
	for(i=a1;i>=0;i--)
	{if(str1[i]==' ')
	{   a2=i+1;
		for(j=a2;j<=a1;j++)
		printf("%c",str1[j]);
		printf(" ");
		a1=i-1;}
	}
	for(i=0;i<=a1;i++)
	printf("%c",str1[i]);
}