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

int main()
{
	int n,i,j,k,h;
	scanf("%d",&n);
	if(n==3||n==2||n==4||n==1){
		printf("empty");
	}
	else{
	for(i=2;i<=n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			h=i-2;
			for(k=2;k<h;k++){
				if(h%k==0){
					break;
				}
			}
			if(k==h){
				printf("%d %d\n",h,i);
			}
		}
	}
	}
	return 0;
}