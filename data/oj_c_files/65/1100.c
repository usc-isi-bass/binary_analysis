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


	int n,i=0,a=0,b=0,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&c,&d);
		if((c==0&&d==1)||(c==1&&d==2)||(c==2&&d==0))
			a++;
		else if(c==d){
			b++;
			a++;
		}
		else{
			b++;
		}
	}
	if(a==b)
		printf("Tie");
	else if(a>b)
		printf("A");
	else{
		printf("B");
	}


	

	

	return 0;
}
