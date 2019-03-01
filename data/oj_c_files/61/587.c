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
	int n,i,m,t,p,s;
	int a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		m=1;
		t=1;
		for(s=3;s<=a[i];s++){
			p=t;
			t=t+m;
			m=p;
		}
		b[i]=t;
	}
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}