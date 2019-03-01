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
	char sz[101],fri[101];
	int i;
	gets(sz);
	for(i=0;sz[i+1]!='\0';i++){
		fri[i]=sz[i]+sz[i+1];
	}
	fri[i]=sz[i]+sz[0];
	fri[i+1]='\0';
	puts(fri);
	return 0;
}
