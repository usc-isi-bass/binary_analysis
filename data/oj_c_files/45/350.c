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
	int i;
	char s[50],w[50];
	char * p;
	scanf("%s",s);
	scanf("%s",w);
	p=strstr(w,s);
	i=p-w;
	printf("%d",i);
	return 0;
}