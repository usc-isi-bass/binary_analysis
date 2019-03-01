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
	char s[101];
	char s1[101];
	char *p,*p1;
	int n,i;
	p=s;
	p1=s1;
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++){
	*(p1+i)=*(p+i)+*(p+i+1);}
	*(p1+n-1)=*(p+n-1)+*p;
	for(i=0;i<n;i++){
	printf("%c",*(p1+i));}
	return 0;
}
