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


int applenum(int n,int k){
	int m=1,i,t=0,z;

	for(m=n+k;;m+=n){
		t=m;
		for(i=0;i<n;i++){
			if(t%n==k){
				t=t-k-t/n;
			}else{
				break;
			}
		}
		if(i==n&&t>=1){
			z=m;
			break;
		}
	}

	return z;
}

int main(){
	int n,k,m;

	scanf("%d%d",&n,&k);

	m=applenum(n,k);

	printf("%d",m);

	return 0;
}