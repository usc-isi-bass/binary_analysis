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
	int i,b=0;
	char a[30]={0};
	gets(a);
	for(i=0;i<30;i++){
		if(b==0&&a[i]<48&&a[i]>57){
			continue;
		}                                         //???????????????????b==0?????\n??continue
		else if(a[i]>=48&&a[i]<=57){
			printf("%c",a[i]);
			b=b+1;
		}                                         //??????ASCII??48?57????????????????b?1
		if(b>=1&&a[i]!='0'&&a[i]!='1'&&a[i]!='2'&&a[i]!='3'&&a[i]!='4'&&a[i]!='5'&&a[i]!='6'&&a[i]!='7'&&a[i]!='8'&&a[i]!='9'){
			printf("\n");
			b=0;
		}                                         //??????????????????b>=1?????
	}
	return 0;
}
