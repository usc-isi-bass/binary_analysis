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
	int i=0,j=0,n,a1,a2,b1,b2,s;
	int sz[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(sz[i][j]!=0&&sz[i][j+1]==0){
				a1=i;
				b1=j+1;
			}
			if(sz[i][j]==0&&sz[i][j+1]!=0){
				b2=j;
				i=n;
			}
		}
	}
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			if(sz[i][j]==0&&sz[i+1][j]!=0){
		        a2=i;
				j=n;
			}
		}
	}
	s=(a2-a1-1)*(b2-b1-1);
printf("%d",s);
return 0;
	}
