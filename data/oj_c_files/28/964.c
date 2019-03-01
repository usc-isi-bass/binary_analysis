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
	char zifuchuan[N];
	int i,a=0;
	gets(zifuchuan);
	int n=strlen(zifuchuan);
	for(i=0;i<n;i++){
		if(zifuchuan[i]!=' '){
			a++;
		}else{
			if(a==0)continue;
			printf("%d,",a);
			a=0;
		}
	}	printf("%d",a);
	return 0;
}
