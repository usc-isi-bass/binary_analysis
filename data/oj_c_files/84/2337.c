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
int max,sed,t,j,r,m,c;
scanf("%d",&max);
scanf("%d",&sed);
scanf("%d",&c);
j=3;
while(j<=n){
	if(max<c){
	t=max;
	max=c;
	c=t;
	}
	if(sed<c){
	r=sed;
	sed=c;
	}
	j++;
	scanf("%d",&c);
	
}
if(max<sed){
m=max;
max=sed;
sed=m;
}
printf("%d\n%d\n",max,sed);
return 0;
}