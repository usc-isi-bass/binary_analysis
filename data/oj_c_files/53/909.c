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
int n,a[300],i,k,q,w,b[300];
scanf("%d",&n);
scanf("%d",&a[0]);
q=0;
w=0;
b[0]=a[0];
for(i=1;i<n;i++){
scanf("%d",&a[i]);
w=0;
for(k=0;k<i;k++){
	if(a[i]==a[k]){w=1;}
				}
if(w==0){
q++;
b[q]=a[i];}
}

for(i=0;i<q;i++){
printf("%d,",b[i]);}
printf("%d",b[q]);
	return 0;
}
