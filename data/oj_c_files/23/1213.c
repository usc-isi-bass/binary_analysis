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

void daopai(char *pt)
{
	int i,s=0,m=0;
	char *index[100];
	for(i=0;*(pt+i)!='\0';i++)
	{
		if((*(pt+i)!=' ')&&(s==0)) 
		{
			index[m]=pt+i;
			s=1;
		}
		else if(*(pt+i)==' ')
		{
			m=m+1;
			s=0;
		}
	}
	if(m!=0)
	{
		for(;*(index[m])!='\0';index[m]++)
		printf("%c",*(index[m]));
	printf(" ");
	for(i=(m-1);i>0;i--)
	{
		for(;*(index[i])!=' ';index[i]++)
			printf("%c",*(index[i]));
		printf(" ");
	}
	for(;*(index[0])!=' ';index[0]++)
		printf("%c",*(index[0]));
	}
	else
	{
		for(;*(index[0])!='\0';index[0]++)
			printf("%c",*(index[0]));
	}
}
int main()
{
	char str[100],*p=str;
	gets(p);
	daopai(p);
return 0;
}