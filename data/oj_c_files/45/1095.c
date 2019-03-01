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
	char a[20],b[20];
	int i;
	scanf("%s",a);
	scanf("%s",b);
    for(i=0;i<strlen(b);i++){
		if(b[i]==a[0])
			break;
	}
	printf("%d",i);
	return 0;
}
