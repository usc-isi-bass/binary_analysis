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
	int b,c,d,e=0,f=0;
	char h[1][501],i[1][501];
	double j,k;
	scanf("%lf%s%s",&j,h[0],i[0]);
	b=strlen(h[0]);
	c=strlen(i[0]);
	if(b!=c){
		f++;
		printf("error");
	}
	else{
		for(d=0;d<b;d++){
			if((h[0][d]!='A'&&h[0][d]!='T'&&h[0][d]!='C'&&h[0][d]!='G')||(i[0][d]!='A'&&i[0][d]!='T'&&i[0][d]!='C'&&i[0][d]!='G')){
				printf("error");
				f++;
				break;
			}
			else{
				if(h[0][d]==i[0][d]){
					e++;
				}
			}
		}
	}
	if(f==0){
		k=1.0*e/b;
		if(k>j){
			printf("yes");
		}
		else{
			printf("no");
		}
	}
	return 0;
}