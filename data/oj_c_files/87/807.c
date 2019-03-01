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
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int s;
	int x;
	int y;
	for(int i=0;i<10000;i++){
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d\n",&f);
	if(a==0&&b==0&&a==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}
	if(d<12){
		d=d+12;
	}
	x=a*3600+b*60+c;
	y=d*3600+e*60+f;
	s=y-x;
	printf("%d\n",s);
	}
	return 0;
}
	



