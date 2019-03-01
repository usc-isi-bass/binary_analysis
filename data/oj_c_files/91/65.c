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
	int n,i;

	char str[101];
	char bud[101];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
		*(bud+i)=*(str+(i%n))+*(str+((i+1)%n));
	}
	for(i=0;i<n;i++){
		printf("%c",*(bud+i));
	}
	return 0;
}