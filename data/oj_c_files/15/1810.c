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
	int n,sz[100][100],r,s,p,q;
	scanf("%d",&n);
	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++){
			scanf("%d",&(sz[row][col]));
		}
	}
	for(int a=0;a<n;a++){
		for(int b=0;b<n;b++){
			if(sz[a][b]==0){
				r=a;
				s=b;
				break;
			}
			else 
				continue;
		}
	}
	for(int c=n-1;c>=0;c--){
		for(int d=n-1;d>=0;d--){
			if(sz[c][d]==0){
				p=c;
				q=d;
				break;
			}
			else 
				continue;
		}
	}
	int e=(r-p-1)*(q-s-1);
	
	printf("%d",e);
	return 0;
}