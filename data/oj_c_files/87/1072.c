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
	int a,b,c,d,e,f;
	int m,n,s;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
	  m=a*3600+b*60+c;
	  n=(d+12)*3600+e*60+f;
	  s=n-m;
	  printf("%d\n",s);
      scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

	}

	return 0;
}



