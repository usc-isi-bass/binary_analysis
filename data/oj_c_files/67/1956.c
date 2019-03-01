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
	int n,a,b,sz[100],s[100];
	double c,z[100];
	scanf("%d %d %d",&n,&a,&b);
	c=1.0*b/a;
	for(int i=0;i<n-1;i++){
		scanf("%d %d",&sz[i],&s[i]);
		z[i]=1.0*s[i]/sz[i];
		if(z[i]>c){
			if(z[i]-c>0.05){
				printf("better\n");
			}else{
				printf("same\n");
			}
		}else{
			if(c-z[i]>0.05){
				printf("worse\n");
			}else{
				printf("same\n");
			}
		}
	}
	return 0;
}