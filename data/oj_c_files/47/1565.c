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
	int n,i=0;
	int z[100];
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&z[i]);
		i++;
	}
	i=1;
	while(i<=n){
		if(i<n){
		    printf("%d ",z[n-i]);
		}else{
			printf("%d",z[n-i]);
		}
		i++;
	}
	return 0;
}