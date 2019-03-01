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

char change(char s)
{
	if(s>='A'&&s<='Z')
		s=s-'A'+'a';
	return s;
}

int main()
{
	char c[2][80];
	int i,j;
	for(j=0;j<2;j++)
		gets(c[j]);
	for(j=0;j<2;j++)
	for(i=0;c[j][i]!='\0';i++)
	{
		c[j][i]=change(c[j][i]);
	}
	if(strcmp(c[0],c[1])>0) printf(">");
	else if(strcmp(c[0],c[1])<0) printf("<");
	else printf("=");
}