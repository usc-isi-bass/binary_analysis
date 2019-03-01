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

int main() {
	int a,b,c,d,e,f;
	int t;
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	while(a!=0){
		t=(60-c)+((60-b-1)*60)+((12+d-1-a)*60*60)+(e*60)+f;
		printf("%d\n",t);
		scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}
