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

char *calc(char *ps,char *pt)
{
	int i,m=strlen(ps);
	for(i=0;i<m-1;i++)
		*(pt+i)=*(ps+i)+*(ps+i+1);
	*(pt+m-1)=*(ps+m-1)+*(ps+0);
	return pt;
}
int main()
{
	char s[101],c[101]={'\0'};
	gets(s);
	printf("%s\n",calc(s,c));
	return 0;
}