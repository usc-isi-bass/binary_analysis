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
	char yw[302],tang=0,c,x=0;
	int n,i;
	scanf("%s",yw);
	n=strlen(yw);
	for(c='A';c<='Z';c++){
		x=0;
		for(i=0;i<n;i++){
			if(c==yw[i]){
				x++;
			}
		}
		if(x!=0){
			printf("%c=%d\n",c,x);
			tang++;
		}
	}
	for(c='a';c<='z';c++){
		x=0;
		for(i=0;i<n;i++){
			if(c==yw[i]){
				x++;
			}
		}
		if(x!=0){
			printf("%c=%d\n",c,x);
			tang++;
		}
	}
	if(tang==0){
		printf("No");
	}
	return 0;
}
