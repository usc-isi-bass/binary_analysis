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
	int a,b,c,d,e,f,s,x;
	while(x!=0){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		x=(d-a)*3600+(e-b)*60+f-c;
		s=(12+d-a)*3600+(e-b)*60+f-c;
		if(x!=0){
			printf("%d\n",s);
	}
}
return 0;
}