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
	int n,i,a[100];
	float s,e,p,q,x=0,y=0,z=0,c=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]<19){
			x=x+1;
		}
		else if(a[i]<36){
			y=y+1;}
		else if(a[i]<61){
			z=z+1;}
		else c=c+1;
	}
	s=x/n*100;
	e=y/n*100;
	p=z/n*100;
	q=c/n*100;
	printf("1-18: %.2f%%\n",s);
	printf("19-35: %.2f%%\n",e);
	printf("36-60: %.2f%%\n",p);
	printf("60??: %.2f%%\n",q);
	return 0;
}
