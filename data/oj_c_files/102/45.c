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
	int n, i, j, k, a=0, b=0;
	double h[40], boy[40], girl[40], e;
	char s[40][10];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s %lf", s[i], &h[i]);
		if(strcmp(s[i], "male")==0){
			boy[a]=h[i];
			a++;
		}
		else{
			girl[b]=h[i];
			b++;
		}
	}
	for(k=1;k<a;k++){
		for(i=0;i<a-k;i++){
			if(boy[i+1]<boy[i]){
				e=boy[i+1];
				boy[i+1]=boy[i];
				boy[i]=e;
			}
		}
	}
	for(i=0;i<a;i++){
		printf("%.2lf ", boy[i]);
	}
	for(k=1;k<b;k++){
		for(i=0;i<b-k;i++){
			if(girl[i+1]>girl[i]){
				e=girl[i+1];
				girl[i+1]=girl[i];
				girl[i]=e;
			}
		}
	}
	for(i=0;i<b-1;i++){
		printf("%.2lf ", girl[i]);
	}
	printf("%.2lf", girl[b-1]);
	return 0;
}