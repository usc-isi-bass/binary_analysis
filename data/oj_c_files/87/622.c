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
	int a,b,c,d,e,f,i,s;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	for(i=0;!(a==0&&b==0&&c==0&&d==0&&e==0&&f==0);i++){
		s=(d-a+12)*3600-c-60*b+f+60*e;
		printf("%d\n",s);
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}

	return 0;
}