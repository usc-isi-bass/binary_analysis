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
	int i,sum=0,f=1;

	char *p=(char *)malloc(sizeof(char)*100);
	gets(p);
	for (i=0;i<strlen(p);i++)
		if (*(p+i)>=48 && *(p+i)<=57) {
			f=0;sum=0;printf("%c",*(p+i));
		}
		else {
			sum++;
			if (sum==1 && f==0) printf("\n");
		}
	free(p);
}
