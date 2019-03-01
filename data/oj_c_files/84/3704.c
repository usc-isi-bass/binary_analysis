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
int a,b,c,x,y,i,n;
scanf("%d",&n);
for(i=1;i<=2;i++){
	if(i=1){
		scanf("%d",&a);
	}
	if(i=2){scanf("%d",&b);
	}
	if(a>b){x=a;y=b;}
	if(a<b){x=b;y=a;}
}
for(i=3;i<=n;i++){
scanf("%d",&c);
if(c>x){y=x;x=c;}
if(x>c&&c>y){y=c;}
}
printf("%d\n""%d\n",x,y);
return 0;
}