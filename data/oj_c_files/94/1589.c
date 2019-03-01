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
	int first[500], n, i, a, b;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &(first[i]));
	}
	for(i=0; i<n; i++){
		if(first[i]%2==0){
			first[i]=0;
		}
	}
	b=n;
	while(n>1){
		for(i=0; i<n-1; i++){
			if(first[i]>first[i+1]){
				a=first[i];
				first[i]=first[i+1];
				first[i+1]=a;
			}
		}
		n--;
	}
	for(i=0; i<b; i++){
		if(first[i]!=0){
			printf("%d", first[i]);
			i++;
			break;
		}
	}
	while(i<b){
		if(first[i]!=0){
			printf(",%d", first[i]);
		}
		i++;
	}
	return 0;
}