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

int main() {
	int b,c,d,i;
	double a,e,f;
	char n[501],m[501];
	scanf("%lf",&a);
	scanf("%s",n);
	scanf("%s",m);
	b=strlen(n);
	c=strlen(m);
	d=0;
	if(b!=c){
	 d++;
	}
	for(i=0;i<b;i++){
		if((n[i]!='A')&&(n[i]!='T')&&(n[i]!='C')&&(n[i]!='G')||(m[i]!='A')&&(m[i]!='T')&&(m[i]!='C')&&(m[i]!='G')){
			d++;
		}
	}
		if(d!=0){
			printf("error");
		}else{
			e=0;
		for(i=0;i<b;i++){
			if(n[i]==m[i]){
				e++;
			}
		 }
		 	f=e/b;
			 if(f>a){
			 	printf("yes");
			 }else{
			 	printf("no");
			 }
		}
  return 0;
}