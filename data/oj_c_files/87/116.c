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
	int n;
	int a,b,c,d,e,f;
	for(n=0;n<100;n++){
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		return 0;
	}else{
	d+=12;
	int s;
	s=(d-a)*60*60+(e-b)*60+(f-c);
	printf("%d\n",s);
	}
	}

	return 0;
}