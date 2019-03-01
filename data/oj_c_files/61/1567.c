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

int s(int n);
int main()
{
	int n[1000],k,j;
	scanf("%d",&k);
	for(j=0;j<k;j++){
		scanf("%d",&n[j]);
	}
	for(j=0;j<k;j++){
		printf("%d\n",s(n[j]));
	}
	return 0;
}
int s(int n){
	int x,y,z,i;
	scanf("d",&n);
	x=1;
	y=1;
	z=x+y;
	for(i=3;i<n;i++){
		x=y;
		y=z;
		z=x+y;
	}
	if(n<3){
		z=1;
	}
	return z;
}
