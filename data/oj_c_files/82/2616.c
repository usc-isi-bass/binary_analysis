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
	int a[1000],b[1000],n,i=0,t=0,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i=i+1){
		if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90){
			t=t+1;
			if(t>max){
				max=t;
			}
		}
		else {
            t=0;
			
		}
	}
	printf("%d",max);
	return 0;
}