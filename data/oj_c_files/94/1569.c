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
int a[501];
int i;
int c;
int j=0;
int m=0;
int k=1;
for(i=0;i<n-1;i++){
scanf("%d ",&a[i]);
}
scanf("%d",&a[n-1]);
int b[501];
for(i=0;i<n;i++){
if(a[i]%2!=0){
m=m+1;
}
}
for(i=0;i<n;i++){
	if(a[i]%2!=0){
	b[j]=a[i];
	j++;
	}
}
for(j=0;j<m-1;j++){
	for(i=0;i<m-k;i++){
		if(b[i]>b[i+1]){
		c=b[i];
		b[i]=b[i+1];
		b[i+1]=c;


		}
	}
	k++;
}
for(i=0;i<m-1;i++){
printf("%d,",b[i]);
}
printf("%d",b[m-1]);
return 0;
}

