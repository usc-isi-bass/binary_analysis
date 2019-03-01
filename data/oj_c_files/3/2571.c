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
int i,n,m,a[1000],b[1000],d[1000],c=0;
scanf("%d%d",&n,&m);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	b[i]=a[i];
}
for(int t=0;t<n;t++){
	for(i=0;i<n;i++){
	if(t!=i)
	d[t]=a[t]+b[i];
	if(d[t]==m)
	c=c+1; 
}
}
if(c==0)
printf("no");
else 
printf("yes"); 
return 0;
}