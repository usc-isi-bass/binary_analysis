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
    double n;
	scanf("%lf",&n);
	char s[1000],j[1000];
	scanf("%s",s);
	scanf("%s",j);
	if(strlen(s)!=strlen(j)){
		printf("error");
		return 0;
	}
	int k;
	k=strlen(s);
	int sum=0;
	double rate;
	int i;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!='A'&&s[i]!='G'&&s[i]!='C'&&s[i]!='T'){
			printf("error");
			return 0;
		}
		if(j[i]!='A'&&j[i]!='G'&&j[i]!='C'&&j[i]!='T'){
			printf("error");
			return 0;
		}
		
		if(s[i]==j[i]){
			sum++;
		}
	}
	rate=1.0*sum/k;
	if(rate>n){
		printf("yes");
	}else{
		printf("no");
	}
    return 0;
}