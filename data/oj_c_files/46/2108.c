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

int main (){
	int n,m,a=0,b=0,c,d=0,e=0;
	int sz[100][100],i,j;
	scanf("%d %d",&n,&m);
	c=n*m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	while(d<c){
		for(b=b;b<m-e;b++){
			printf("%d\n",sz[a][b]);
			d++;
		}
		if(d>=c){
			break;
		}
		b=b-1;
		for(a=a+1;a<n-e;a++){
			printf("%d\n",sz[a][b]);
			d++;
		}
		if(d>=c){
			break;
		}
		a=a-1;
		for(b=b-1;b>=e;b--){
			printf("%d\n",sz[a][b]);
			d++;
		}
		if(d>=c){
			break;
		}
		b=b+1;
		for(a=a-1;a>=e+1;a--){
			printf("%d\n",sz[a][b]);
			d++;
		}
		if(d>=c){
			break;
		}
		a=a+1;
		b=b+1;
		e++;
	}

	return 0;
}
