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
	char e[50];
	int a;
	scanf("%s",e);
	printf("%d",strlen(e));
	while(scanf("%s",e) == 1){
		printf(",%d",strlen(e));
	}
	return 0;
}