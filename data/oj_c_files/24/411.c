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
	char a[50][50]={'0'},b;
	int i,max=0,min=0;
	for(i=0;i<50;i++){
		scanf("%s",a[i]);
		scanf("%c",&b);
		if(b==10){
			break;
		}
	}
	for(i=0;i<50;i++){
		if(strlen(a[i])>strlen(a[max])){
			max=i;
		}
		else if(strlen(a[i])<strlen(a[min])&&strlen(a[i])!=0){
			min=i;
		}
	}
	printf("%s\n%s",a[max],a[min]);
	return 0;
}	