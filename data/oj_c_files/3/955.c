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
int n,k,i,s,j,sz[1000],h,f=0;
scanf("%d %d",&n,&k);
s=0;
for(h=0;h<n;h++){
	scanf("%d",&(sz[h]));
}
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
		if(((sz[i]+sz[j])==k)&&(f==0)){
			printf("yes");
			f=1;
			break;
		}
	}
	if(f==1) break;
}
if(f==0){
   printf("no");
}
return 0;
}