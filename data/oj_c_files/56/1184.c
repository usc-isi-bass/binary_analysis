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
	char num[6], i, a, b=0, k=0;
	scanf("%s", num);
	a=strlen(num);
	for(i=0;i<a/2;i++){
		    b = num[i];
		    num[i] = num[a-1-i];
		    num[a-1-i] = b;
		}
	printf("%s", num);
	return 0;
}