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
	int x,y;
	int same(int m,int n);
	scanf("%d%d",&x,&y);
	printf("%d",same(x,y));
}

int same(int x,int y){
	while(x!=y){
		if(x>y) x=x/2;
		else y=y/2;
	}
	return x;
}