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
	char string[101],str[50][100];
	char c;
	int n=0,i,j,t;
	gets(string);
	t=strlen(string);
	for(i=0;i<50;i++)
	{
		for(j=0;(c=string[j+n])!=' ';j++)
		{
		str[i][j]=string[j+n];
		}
		n=n+j+1;
		str[i][j+1]='\0';
		if(n>t)break;
	}
	for(;i!=0;i--)
	{
		for(j=0;(c=str[i][j])!='\0';j++)
		printf("%c",str[i][j]);
		printf(" ");
	}
	for(j=0;(c=str[0][j])!='\0';j++)
		printf("%c",str[0][j]);
}