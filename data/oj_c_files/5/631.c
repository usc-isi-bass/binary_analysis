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
	double percent;
	char a[501],b[501];
	int number=0;
	int i;
	scanf("%lf",&percent);
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)!=strlen(b)){
		printf("error");
		return 0;
	}
	for(i=0;a[i]!='\0';i++){
		if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
		}else{
			printf("error");
			return 0;
		}
	}
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[i]){
			number++;
		}
	}
	if((double)number>((double)strlen(a))*percent){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}