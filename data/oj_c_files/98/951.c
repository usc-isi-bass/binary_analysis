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

int find(char *s);
char s[1000];
int main()
{
	int i,j,n,d=0;
	char c;
	scanf("%d%c",&n,&c);
	gets(s);
	for(i=0;*(s+i)!='\0';i++)
	{
		d+=1;
		if(*(s+i)==' '&&d<=81&&d+find(s+i)>81)
		{
			printf("\n");
			d=0;
		}
		else
			printf("%c",*(s+i));
	}
	gets(s);
	gets(s);
	return 0;
}
int find(char *s)
{
	int i,j,k;
	for(i=1;i<=40;i++)
	{
		if(*(s+i)==' ')
			return i;
	}
}