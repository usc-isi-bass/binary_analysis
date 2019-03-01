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
	char a[5], t[5];
	int n, i;
	scanf("%s", a);
	n=strlen(a);
    for(i=0;i<n;i++){
	   t[n-i-1]=a[i];
	}
	t[n]='\0';
	printf("%s\n", t);
	return 0;
}