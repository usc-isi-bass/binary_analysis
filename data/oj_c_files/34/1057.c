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
	int n,j,i;
	scanf("%d",&n);
for(;n!=1;){
	if(n%2==0){ printf("%d/2=",n); n=n/2; 	printf("%d",n);}
	 else{  printf("%d*3+1=",n); n=n*3+1; 	printf("%d",n);}
	 printf("\n");}
	printf("End");
	return 0;
}
