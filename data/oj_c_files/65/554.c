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
	int n,i;
	int c=0;
	int a[200],b[200];
	scanf("%d",&n);
		for(i=0;i<n;i++){
	scanf("%d%d",&a[i],&b[i]);
	if((a[i]-b[i])==(-1)||(a[i]-b[i])==2){
		c++;}else if(a[i]==b[i]){
			c=c;}else{c--;}
	}
		if(c>0){printf("A");}
		else if(c<0){printf("B");}
		else{printf("Tie");}
	return 0;
	}
