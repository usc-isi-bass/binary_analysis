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
	int n,max=0,i,jc=0,a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	if(n==1){
		if(a[0]>=90&&a[0]<=140&&b[0]>=60&&b[0]<=90){
			printf("%d\n",n);
		}else printf("0");
	}
	else if(n!=1){
	for(i=0;i<n;i++){
		if((a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)){
			jc++;
			if(jc>max) max=jc;
		}
		else jc=0;
	}
	printf("%d\n",max);
	}
	
    return 0;
 }
