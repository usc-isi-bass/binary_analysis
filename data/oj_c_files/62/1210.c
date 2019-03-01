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
	char a[1000];
	int i,t,j;
	gets(a);
	for(i=1;a[i]!='\0';i++){
		if(a[i-1]==' '&&a[i]==' '){
			t=i;
			for(j=t;a[j-1]!='\0';j++){
				a[j-1]=a[j];
			}
			i=i-1;
		}
	}
    printf("%s",a);
    return 0;
}