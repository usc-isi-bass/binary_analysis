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
	char a[31],i;
	gets(a);
	for(i=0;i<31;i++){
		if(a[i]>=48&&a[i]<=57){
			printf("%c",a[i]);
		}
    if(a[i+1]>=48&&a[i+1]<=57&&a[i]<48||a[i]>57&&a[i+1]>=48&&a[i+1]<=57){
			printf("\n");
		}
	}
	return 0;
}