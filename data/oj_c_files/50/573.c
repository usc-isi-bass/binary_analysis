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
	int a[12];
	int n,i;
	scanf("%d",&n);
	a[0]=((13-1)%7+n)%7;
	a[1]=((13+31-1)%7+n)%7;
	a[2]=((13+28+31-1)%7+n)%7;
	a[3]=((13+28+31+31-1)%7+n)%7;
	a[4]=((13+28+31+31+30-1)%7+n)%7;
	a[5]=((13+28+31+31+30+31-1)%7+n)%7;
	a[6]=((13+31+28+31+30+31+30-1)%7+n)%7;
	a[7]=((13+31+28+31+30+31+30+31-1)%7+n)%7;
	a[8]=((13+31+28+31+30+31+30+31+31-1)%7+n)%7;
	a[9]=((13+31+28+31+30+31+30+31+31+30-1)%7+n)%7;
	a[10]=((13+31+28+31+30+31+30+31+31+30+31-1)%7+n)%7;
	a[11]=((13+31+28+31+30+31+30+31+31+30+31+30-1)%7+n)%7;
	for(i=0;i<12;i++){
		if(a[i]==5)
			printf("%d\n",i+1);
	}
	return 0;
}