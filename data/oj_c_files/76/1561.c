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

int main()
{
int a[10000],b[10000],c[10001];
int i,n,m,s,p,q=1;
for(i=0;i<10001;i++){
	c[i]=1;
}
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d%d",&a[i],&b[i]);
	for(m=a[i];m<b[i];m++){
	c[m]=0;
	}
}
for(i=0;i<10001;i++){
	if(c[i]==0){
	s=i;
	break;
	}
}
for(i=10000;i>=0;i--){
    if(c[i]==0){
		p=i+1;
	break;
	}
}
for(i=s;i<p;i++){
	if(c[i]!=0){
     q=0;
	break;
	}
}
if(q==0){
	printf("no");
}else{
    printf("%d %d",s,p);
}

		return 0;
}