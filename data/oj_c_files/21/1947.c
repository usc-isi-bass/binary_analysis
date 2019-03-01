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


void main(){
	unsigned int n,i,a,tot=0,min=65535,max=0;
	float avg;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		tot+=a;
		if(min>a) min=a;
		if(max<a) max=a;
	}
	avg=(float)tot/n;
	if(avg-min>=max-avg){
		printf("%d",min);
		if(avg-min==max-avg)
			printf(",%d",max);
	}
	else
		printf("%d",max);
}