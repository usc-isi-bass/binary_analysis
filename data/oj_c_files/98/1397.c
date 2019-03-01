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
	int n,i=0,len,L=0;
	char ori[300][42];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",ori[i]);
	}
	printf("%s",ori[0]);
	L+=strlen(ori[0]);
	for(i=1;i<n;i++){
		L+=strlen(ori[i])+1;
		if(L>80){
			L=0;
			printf("\n%s",ori[i]);
			L+=strlen(ori[i]);
		}else{
			printf(" %s",ori[i]);
		}
	}


	return 0;
}