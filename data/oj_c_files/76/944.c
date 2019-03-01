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
int n,i,k,h,e,d,g;
h=1;
int a[100],b[100];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d%d",&a[i],&b[i]);
}
for(k=1;k<n;k++){
	for(i=0;i<n-k;i++){
		if(a[i]>a[i+1]){
		e=a[i];
		a[i]=a[i+1];
		a[i+1]=e;
		d=b[i];
		b[i]=b[i+1];
		b[i+1]=d;
		}
	}
}
h=1;
for(i=0;i<n-1;i++){
	if(b[i]<a[i+1]){
	h=0;
	break;
	}else if((b[i]>b[i+1])&&(i!=n-1)){
	g=b[i];
	b[i]=b[i+1];
	b[i+1]=g;
	}
}
if(h==0){
printf("no");
}else{
printf("%d %d",a[0],b[n-1]);
}
return 0;
}
