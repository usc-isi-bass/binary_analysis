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
	char k[501],h[501];
	double c,d;
	scanf("%lf",&c);
	scanf("%s",k);
	scanf("%s",h);
	int sum=0;
	int a;
	a=strlen(k);
	int b;
	b=strlen(h);
	if(a!=b)
		printf("error");
	else if(a==b){
		for(int i=0;i<a;i++){
			if((k[i]!='A'&&k[i]!='T'&&k[i]!='C'&&k[i]!='G')||(h[i]!='A'&&h[i]!='T'&&h[i]!='C'&&h[i]!='G')){
				printf("error");
			return 0;
			}
			else{
				if(k[i]==h[i])
					sum++;
			}
		}
		if(1.0*sum/a>c)
			printf("yes");
		else
			printf("no");
	}

	return 0;
}