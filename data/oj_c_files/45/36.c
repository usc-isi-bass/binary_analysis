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
	int c=0;
	char a[50],b[50];
	scanf("%s%s",&a,&b);
	c=strstr(b,a)-b;
	printf("%d\n",c);
	return 0;

}
 