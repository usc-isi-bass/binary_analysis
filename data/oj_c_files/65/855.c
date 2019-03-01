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
	int n;
	scanf("%d",&n);
    int a[200],b[200];
int c=0,d=0;
	int i;
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			c++;
		}else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0)){
			d++;
		}else if((a[i]==0&&b[i]==0)||(a[i]==1&&b[i]==1)||(a[i]==2&&b[i]==2)){
			continue;
		}
	}
if(c>d){
printf("A");
}else if(c<d){
printf("B");
}else{
printf("Tie");
}
	return 0;
}