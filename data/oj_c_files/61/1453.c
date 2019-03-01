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
int n,a[20],b[20],c[20],i,t,k,w;
scanf("%d",&n);
for(k=0;k<n;k++){
scanf("%d",&a[k]);
}
for(i=0;i<n;i++){
b[i]=0;
c[i]=1;
	for(w=0;w<a[i]-1;w++){

t=b[i];
b[i]=c[i];
c[i]=b[i]+t;

	}
	printf("%d\n",c[i]);
}
return 0;



}