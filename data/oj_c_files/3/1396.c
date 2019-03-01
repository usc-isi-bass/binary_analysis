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
int a[1000];
int n,k,l;
l=0;
scanf("%d%d",&n,&k);
int j,e,ok,i;
ok=0;
for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
for(i=0;i<n;i++){
	for(j=1;j<n;j++){
		if((a[0]+a[j])==k){ok=1;}
	}
	e=a[0];
	a[0]=a[l];
	a[l]=e;
	l++;
	}
if(ok==1){printf("yes");}
else{printf("no");}
	return 0;
}
