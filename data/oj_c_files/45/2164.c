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
	char a[20], b[20], c[20];
	int i, j, k, sum1, sum2, num;
	scanf("%s%s", a, b);
	sum1=strlen(a);
	sum2=strlen(b);
	for(i=0;i<=(sum2-sum1);i++){
		strcpy(c,b);
		c[i+sum1]=0;
		if(strcmp(&c[i],a)==0){
			num=i;
			break;
		}
	}
	printf("%d", num);
	return 0;
}
