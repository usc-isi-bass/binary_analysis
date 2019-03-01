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
	char s[101],d[101];
	int i,k=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if((s[i]!=32)||(s[i+1]!=32))
		{    d[k++]=s[i];
		}
	}
		d[k]='\0';
		printf("%s",d);
	return 0;
}