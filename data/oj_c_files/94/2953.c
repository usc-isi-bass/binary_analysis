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
int n,i,j,e,k,h,m=0;
int sz[501],b[501];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&(sz[i]));
	if(sz[i]%2!=0){
     b[m]=sz[i];
	 m++;}
}
for(k=1;k<=m;k++){
	for(j=0;j<k;j++){
		if(b[j]>=b[k]){
			e=b[j];
			b[j]=b[k];
			b[k]=e;}}}
for(h=1;h<=m-1;h++){
	printf("%d,",b[h]);
}
printf("%d",b[m]);
return 0;
}
