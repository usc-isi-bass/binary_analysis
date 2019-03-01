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

int main()
{
	int n,a,b,c,d,e;
    scanf("%d",&n);
	a = n%10;
	b = ((n-a)%100)/10;
	c = ((n-10*b-a)%1000)/100;
	if(c==0){
		printf("%d%d",a,b);
	}
	else{
	     d = ((n-100*c-10*b-a)%10000)/1000;
	     if(d==0){
		      printf("%d%d%d",a,b,c);
		 }
		 else{
	          e = n/10000;
	          if(e==0)
		           printf("%d%d%d%d",a,b,c,d);
	          else
		           printf("%d%d%d%d%d",a,b,c,d,e);
		 }
	}
	return 0;
}
