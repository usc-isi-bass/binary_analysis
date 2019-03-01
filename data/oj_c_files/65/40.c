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
	int n,i,x,y;
	int a[3]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		if(x-y==1)
			a[2]++;
		if(y-x==1)
			a[1]++;
		if(x-y==2)
			a[1]++;
		if(y-x==2)
			a[2]++;
	}
	if(a[1]>a[2])
		printf("A");
	else if(a[1]<a[2])
		printf("B");
	else
		printf("Tie");
	return 0;
}
