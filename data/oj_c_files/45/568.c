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

void main()
{
	char s[20]={'\0'},w[20]={'\0'};
	int i,j,num;
	char *p;
	scanf ("%s %s",s,w);
	p=strstr(w,s);
	*p='!';
	for (i=0;i<strlen(w);i++)
		if (w[i]=='!') {num=i;break;}

	printf("%d\n",num);
}
