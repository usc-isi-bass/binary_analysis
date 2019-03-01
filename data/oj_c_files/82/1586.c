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
    int x,a,b;
	scanf("%d",&x);
	int y=0;
	int max=0;
	for(int i=0;i<x;i++){
	scanf("%d%d",&a, &b);
	if(a>=90&&a<=140&&b>=60&&b<=90){y++;
	if(y>=max){max=y;}
	}

	else{y=0;}
	}
	printf("%d",max);
	return 0;
}