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
int m,n,k,z=1,i,x=0,y=0;
scanf("%d%d",&n,&k);
for(m=n;;m++){
	
    if((m-k)%n==0){x=m;y=m;
		y=(n-1)*(y-k)/n;z=0;
		for(i=1;i<n;i++){
			if((y-k)%n!=0){z=1;break;}
			y=(n-1)*(y-k)/n;}}
	
	if(z==0&&y!=0){break;}}
	printf("%d",x);



return 0;}
