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


int main() {
	char str[600], subStr[260], rep[260];
	memset(str, 0, sizeof(str));
	scanf("%s%s%s", str, subStr, rep);
	char* pos  = strstr(str, subStr);
	if(pos != NULL) {
		int len = strlen(rep);
		for(int i = 0; i < len; i++) {
			*pos++ = rep[i]; 
		}
	} 
	printf("%s", str);
}