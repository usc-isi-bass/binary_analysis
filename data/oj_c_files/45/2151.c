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
	char s[200],w[200];
	scanf("%s%s",s,w);
	int len=strlen(w);
	char *p=strstr(w,s);
	int len2=strlen(p);
	printf("%d\n",len-len2);
	return 0;
}