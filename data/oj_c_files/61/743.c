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
int n,sum=0,a=1,b=1,d[20],c[20];
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d",&d[i]);
if(d[i]>2){
for(int j=1;j<d[i]-1;j++){
	sum=a+b;
	a=b;
	b=sum;
}
}else{
	b=1;
}
c[i]=b;
b=1;
a=1;
}
for(int k=0;k<n;k++){
	printf("%d\n",c[k]);
}
return 0;
}