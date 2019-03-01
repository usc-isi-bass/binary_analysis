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
int n,i;
scanf("%d",&n);
int a[100],b[100];
for(i=0;i<n;i++)
scanf("%d %d",&a[i],&b[i]);
double w,y[100];
w=(double)b[0]/a[0];
for(i=1;i<n;i++){
	y[i]=(double) b[i]/a[i];
	if(y[i]-w>0.05)
		printf("better\n");
	else if(w-y[i]>0.05)
		printf("worse\n");
	else
		printf("same\n");


}


return 0;
}