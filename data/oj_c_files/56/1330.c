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
	char zfc[100], exc;
	int len, i;
	scanf("%s", zfc);
        len = strlen(zfc);
for(i = 0; i < len/2; i++){
	exc = zfc[i];
	zfc[i] = zfc[len-1-i];
	zfc[len-1-i] = exc;
}

printf("%s", zfc);

	return 0;
}
