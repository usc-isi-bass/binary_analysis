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
	int n,a=0,b=0,c,d,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&c,&d);
		if(c==d)
			continue;
		else if(c==0&&d==2)
			b++;
		else if(c==2&&d==0)
			a++;
		else if(c-d<0)
			a++;
		else if(c-d>0)
			b++;
	}
	if(a>b)
		printf("A");
	if(a==b)
		printf("Tie");
	if(a<b)
		printf("B");
	return 0;
}