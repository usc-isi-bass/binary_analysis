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

int main(){
	int i,j;
	char a[101];
	gets(a);
	for (i=0;i<strlen(a)-1;i++)
		printf("%c",*(a+i)+*(a+i+1));
	printf("%c",*a+*(a+strlen(a)-1));
}