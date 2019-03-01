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
	char a[20][50],c;
	int i=0;
	do{scanf("%s",a[i]);scanf("%c",&c);i++;}while(c!='\n');
	printf("%s",a[i-1]);
	i=i-2;
	for(;i>=0;i--)printf(" %s",a[i]);
	printf("\n");
}