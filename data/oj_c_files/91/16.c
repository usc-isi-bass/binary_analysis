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

// zhizhen.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int i;
	char s[101],b[101];
	gets(s);
	int len=strlen(s);
	for(i=0;i<len-1;i++){
		*(b+i)=*(s+i)+*(s+i+1);
	}
	*(b+len-1)=*(s+len-1)+*(s+0);
	for(i=0;i<len;i++){
		printf("%c",*(b+i));
	}
	return 0;
}

