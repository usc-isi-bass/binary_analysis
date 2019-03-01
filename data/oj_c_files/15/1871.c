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

int zl[1000][1000];
int main(){
    int i,j,n,a,b,s;
	scanf("%d",&n);
    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&zl[i][j]);
		}
	}
    for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(zl[i][j]==0){
	            break;
			}
		 }
	 if(zl[i][j]==0){
				
	            break;
			} 
}
a=i;
b=j; 
	for(i=n-1;i>0;i--){
		 for(j=n-1;j>0;j--){
		    if(zl[i][j]==0){
			 break;
			}
		}
	if(zl[i][j]==0){
			 break;
			}
}
    s=(i-a-1)*(j-b-1);
	printf("%d\n",s);
	return 0;
}