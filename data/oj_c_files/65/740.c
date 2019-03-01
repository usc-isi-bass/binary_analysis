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
int n,i,p,q,a[1000],b[1000];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
p=0;
q=0;
for(i=0;i<n;i++){
	if(a[i]==0){
		if(b[i]==1){
		p++;
		} else{
		if(b[i]==2)
			q++;
		}
	}else{
		if(a[i]==1){
			if(b[i]==0){
			q++;
			}else{
			if(b[i]==2)
				p++;
			}
		}else{
			if(a[i]==2){
				if(b[i]==0){
				p++;
				}else{
				if(b[i]==1)
					q++;
				}
			}
		}
	}
}
if(p>q){
printf("A");
}else{
	if(p<q){
	printf("B");
	}else{
	if(p==q)
		printf("Tie");
	}
}

return 0;
}