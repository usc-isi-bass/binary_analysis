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
	int a,b,c,d,e,f,h,m,s,t;
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
	h=11+d-a;
	m=e+59-b;
	s=f+60-c;
	t=3600*h+60*m+s;
    printf("%d\n",t);
	scanf("%d %d %d %d %d %d\n",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}