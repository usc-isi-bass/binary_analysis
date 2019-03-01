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
	int n,m,i,j,a[20],c[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[0]=1;
		a[1]=1;
		c[i]=0;
		scanf("%d",&m);
		if(m==1||m==2){
			c[i]=1;
		}
		else{
			c[i]=2;
			for(j=2;j<m;j++){
				a[j]=a[j-2]+a[j-1];
				c[i]=a[j];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}