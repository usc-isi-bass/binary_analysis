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
int i,m,n,a[200],b[200],p,q;
scanf("%d",&n);
p=0;
q=0;
for(i=0;i<n;i++){
	scanf("%d %d\n",&a[i],&b[i]);
}
for(m=0;m<n;m++){
	if(a[m]==b[m]){
		p=p;
		q=q;
	}
	else if(a[m]==0&&b[m]==1){
	p=p+1;
	q=q;
	}
    else if(a[m]==0&&b[m]==2){
	p=p;
	q=q+1;
	}
	else if(a[m]==1&&b[m]==0){
	p=p;
	q=q+1;
	}
	else if(a[m]==1&&b[m]==2){
	p=p+1;
	q=q;
	}
	else if(a[m]==2&&b[m]==0){
	p=p+1;
	q=q;
	}
	else if(a[m]==2&&b[m]==1){
	p=p;
	q=q+1;
	}
}
if(p>q){
printf("A");
}
if(p<q){
printf("B");
}
if(p==q){
printf("Tie");
}
return 0;
}