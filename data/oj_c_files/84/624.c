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
	int n,a,b,c,m,i=1;
	scanf("%d",&n);
	while(i<=n){
		if(i==1){scanf("%d",&a);}
		if(i==2){
		scanf("%d",&b);
		  if(b>a){m=a;a=b;b=m;}
		}
		if (i!=1&&i!=2){
		scanf("%d",&c);
		  if(c>a){b=a;a=c;}
		  if(c<a&&c>b){b=c;}
		}
	i++;
	
	
	}
printf("%d\n%d\n",a,b);

return 0;
}