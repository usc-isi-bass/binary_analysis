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
	int i,k=0,len,panduan=0;
	double r,n;
	char a[501],b[501];
	scanf("%lf%s%s",&n,&a,&b);
	len=strlen(a);
	if(len!=strlen(b)){
		panduan=1;
	}
	else{
	for(i=0;i<len;i++){
		if((a[i]!='T'&&a[i]!='A'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){
			panduan=1;
			break;
		}
		if(a[i]==b[i]){
			k++;
		}
	}
	r=1.0*k/len;
	}
	if(panduan==1){
		printf("error");
	}
	else{
		if(r>n){
		printf("yes");
		}
		else{
			printf("no");
		}
	}
	


	return 0;
}