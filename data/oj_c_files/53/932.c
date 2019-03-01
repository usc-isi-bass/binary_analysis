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
int sz[300];
int n,i,k,a,b,m=1;
scanf("%d",&n);
scanf("%d",&(sz[0]));
for(i=1;i<n;i++){
	b=0;
	scanf("%d",&a);
	for(k=0;k<m;k++){
		if(sz[k]==a){
			b++;
		}
	}
	if(b==0){
		sz[m]=a;
		m++;
	}
}
printf("%d",sz[0]);
for(i=1;i<m;i++){
printf(",%d",sz[i]);
}
return 0;
}
