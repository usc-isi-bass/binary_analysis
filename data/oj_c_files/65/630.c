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
	int n,i,a=0,b=0;
	int A[200],B[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&A[i],&B[i]);
		int c=A[i]-B[i];
		if(c==-1||c==2) a++;
        else if(c==1||c==-2) b++;}
	if(a>b) printf("A");
	else if(a==b) printf("Tie");
	else printf("B");
	return 0;
}