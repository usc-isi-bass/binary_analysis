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
	int countA=0,countB=0,n,a,b,t=0;
	int i;
	double w;
	scanf("%d",&n);
		
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){countA++;t++;}
		else if(a==b);
		else {countB++;t++;}
		
	}

	w=1.0*countA/t;
	if(w>0.5)printf("A");
	else if(w==0.5)printf("Tie");
	else printf("B");


		return 0;
}