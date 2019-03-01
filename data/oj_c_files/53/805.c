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
int sz[300],nsz[300];
int n,i,j,a,b=0;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&sz[i]);
}
for(j=1;j<n;j++){
	for(a=j;a>0;a--){
		if(sz[j]==sz[a-1]){break;}
		else if((sz[j]!=sz[a-1])&&(a==1)){nsz[b]=sz[j];b++;}
		else if((sz[j]!=sz[a-1])&&(a!=1)){continue;}
	}
}
printf("%d,",sz[0]);

for(int c=0;c<b;c++){
	if(c==b-1){
		printf("%d",nsz[c]);
	}else{
		printf("%d,",nsz[c]);
	}
}
return 0;
}