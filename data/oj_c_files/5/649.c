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

int main (){
	double a,e=0;
	int i,d=0,f,g;
	char b[500],c[500];
	scanf("%lf\n",&a);
	gets(b);
	gets(c);
	f=strlen(b);
	g=strlen(c);
	if(f!=g){
		printf("error");
		return 0;
	}
	for(i=0;i<f;i++){
		if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<g;i++){
		if(c[i]!='A'&&c[i]!='T'&&c[i]!='G'&&c[i]!='C'){
			printf("error");
			return 0;
		}
	}
	for(i=0;i<f;i++){
		if(b[i]==c[i])
			d++;
	}
	e=1.0*d/g;



	if(e>=a)
		printf("yes");
	else
		printf("no");



	return 0;
}