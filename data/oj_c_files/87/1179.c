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
	int a1,a2,b1,b2,c1,c2;
	int r=0;
	scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
	while(a1!=0||b1!=0||c1!=0||a2!=0||b2!=0||c2!=0){
		r+=(a2+11-a1)*3600;
		r+=3600-b1*60-c1;
		r+=b2*60+c2;
		printf("%d\n",r);
		scanf("%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2);
		r=0;
	}
return 0;
}

