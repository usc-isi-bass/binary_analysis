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
		int n,i,j,k=0,e,a[500];
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]%2==0){
				a[i]=0;
			}
		}
		for(i=1;i<=n;i++){
			for(j=0;j<n-i;j++){
                if(a[j]>a[j+1]){
                    e=a[j+1];
			        a[j+1]=a[j];
			        a[j]=e;
				}
			}
		}
        for(i=0;i<n-1;i++){
            if(a[i]!=0){
			printf("%d,",a[i]);
			}
		}
		printf("%d",a[n-1]);
		return 0;
}