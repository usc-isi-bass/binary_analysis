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
	char s[101],pre;
	int i;

	gets(s);
	pre='-';

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ') 
			printf("%c",s[i]);
		else if(pre!=' ')
			printf(" ");
		pre=s[i];
	}

	return 0;
}