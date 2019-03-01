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
	int n,i,a,b,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==0){
			if(b==1) x+=1;
			else if(b==2) x-=1;
		}
		else if(a==1){
			if(b==0) x-=1;
			else if(b==2) x+=1;
		}
		else{
			if(b==0) x+=1;
			if(b==1) x-=1;
		}
	}
	if(x>0) printf("A");
	else if(x==0) printf("Tie");
	else printf("B");
	return 0;
}