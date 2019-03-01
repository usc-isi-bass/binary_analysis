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
	char c1[80];
	gets(c1);
	char c2[80];
	gets(c2);
	int i,j;
	int a=0;
	int b=0;
	for(i=0;c1[i]!='\0';i++)
	{
		if(c1[i]<='Z'&&c1[i]>='A')
		{
			c1[i]=c1[i]+32;
		}
		a++;
	}
	for(j=0;c2[j]!='\0';j++)
	{
		if(c2[j]<='Z'&&c2[j]>='A')
		{
			c2[j]=c2[j]+32;
		}
		b++;
	}
	int m=0;
	for(i=0;c1[i]!='\0'&&c2[i]!='\0';i++)
	{
		if(c1[i]>c2[i])
		{
			printf(">\n");
			break;
		}
		else if(c1[i]<c2[i])
		{
			printf("<\n");
			break;
		}
		else
		{
			m++;
		}
	}
	if(a==b&&a==m)
	{
		printf("=\n");
	}
	return 0;
}

