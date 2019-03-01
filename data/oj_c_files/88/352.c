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
	char sz[30];
	int i;
	gets(sz);
	for(i=0;i<30;i++){
		if((sz[i]>='0')&&(sz[i]<='9')){
			printf("%c",sz[i]);
		}else{
			printf("\n");
		}
	}
	return 0;
}