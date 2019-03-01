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
int n,s=0,i,j;
int a=0;
int b=0;
int sz[100][100];
scanf("%d",&n);
for(i=0;i<n;i++ ){
	for(j=0;j<n;j++){
		scanf("%d",&sz[i][j]);
	}
}
for(i=0;i<n;i++ ){
	for(j=0;j<n;j++){
		if(sz[i][j]==0)
			a++;
	}
		if(a!=0){
			break;
		}
	
}
for(j=0;j<n;j++ ){
	for(i=0;i<n;i++){
		if(sz[i][j]==0)
			b++;
	}
	if(b!=0){
		break;
	}
}
s=a*b-2*a-2*b+4;
printf("%d",s);
return 0;
}
		