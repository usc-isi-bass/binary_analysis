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
	int h1,m1,s1,h2,m2,s2,t1,t2;
	while (scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2),h1||h2){
		t1=h1*3600+m1*60+s1;
		t2=(h2+12)*3600+m2*60+s2;
		printf("%d\n",t2-t1);
	}
}