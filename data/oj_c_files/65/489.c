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
	int a[200],b[200],c,d=0,e=0,f,g;
	scanf("%d",&c);
	for(f=0;f<c;f++){
		scanf("%d%d",&a[f],&b[f]);
		if(a[f]==0){
			if(b[f]==1){
				d++;
			}
			if(b[f]==2){
				e++;
			}
		}
		if(a[f]==1){
			if(b[f]==2){
				d++;
			}
			if(b[f]==0){
				e++;
			}
		}
		if(a[f]==2){
			if(b[f]==0){
				d++;
			}
			if(b[f]==1){
				e++;
			}
		}
	}
	if(d>e){
		printf("A");
	}
	if(d==e){
		printf("Tie");
	}
	if(d<e){
		printf("B");
	}
	return 0;
}