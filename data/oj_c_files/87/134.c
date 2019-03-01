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
	int a,b,c,d,e,f,g;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a+b+c+d+e+f!=0){
		g=3600*(d-a+11)+60*(e+59-b)+f+60-c;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		printf("%d\n",g);
	}
	return 0;
}