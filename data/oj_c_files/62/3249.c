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
	char in[200],out[200];
	int len,i,j=0;
	gets(in);
	len=strlen(in);
	for(i=0;i<len;i++)
		if(in[i]!=' ')
			out[j++]=in[i];
		else
			if(in[i+1]!=' ')
				out[j++]=' ';
			else
				continue;
	out[j]='\0';
	puts(out);
	return 0;
}