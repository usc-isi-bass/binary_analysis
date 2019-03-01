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
int n,i,a,b;
scanf("%d",&n);
int sz[MAX_LENGTH];
for(i=0;i<n;i++){
	scanf("%d",&(sz[i]));
	}
if(sz[0]>sz[1]){
	a=sz[0];
	b=sz[1];
}else{a=sz[1];b=sz[0];
}
for(i=2;i<n;i++){
	if(sz[i]>a){
		b=a;
		a=sz[i];
	}else{
		if(sz[i]>b){
			b=sz[i];
}}}
	printf("%d\n%d",a,b);
	return 0;
}