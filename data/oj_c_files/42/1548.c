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
	int n,a,u[1000000],b,c;
	b=0;
	c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d ",&u[i]);
		}
		scanf("%d",&a);
		for(int i=0;i<n;i++){
			if(u[i]!=a){
				b=b+1;}}
		for(int i=0;i<n;i++){
			if(u[i]!=a){
				c=c+1;
				if(c<b){printf("%d ",u[i]);}
				else if(c==b){printf("%d",u[i]);}}}
				scanf("%d",&n);
	return 0;
	}
