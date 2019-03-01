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
	int sz1[1000];
	int h,j=0,k=0,i,n,mj,a=-1,b=-1,c=0,d;
	scanf("%d",&n);
	for(h=0;h<n;h++){
		k=0;
	for(i=0;i<n;i++){
		if(a<0){
		c++;}
	scanf("%d",&sz1[i]);
	if(sz1[i]==0){
     a=i;b=h;}
    }
	for(i=0;i<n;i++){
	sz1[i]=0;}
}
	d=c%n;
	mj=(b-d)*(a-d);
	printf("%d\n",mj);
	return 0;
}