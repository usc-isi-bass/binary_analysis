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
int n,i,a,d,k,p,q;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&a);
	p=1;
	q=1;
	if(a==1||a==2){
		printf("%d\n",q);
	}
	else if(a>2){
		for(k=0;k<a-2;k++){
		d=p+q;
		p=q;
		q=d;
		}
     	printf("%d\n",q);

	}
}
 return 0;
}