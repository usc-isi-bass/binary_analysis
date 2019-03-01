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
	char sz[101],*p,sz1[101],*p1;
	int i,n,j,add=0;
	gets(sz);
	p=sz;
	p1=sz1;
	n=strlen(sz);
	for(i=0;i<n;i++){
		*(p1+i)=*(p+i)+*(p+(i+1)%n);
	}
	for(i=0;i<n;i++){
		printf("%c",*(p1+i));
	}
	return 0;
}
