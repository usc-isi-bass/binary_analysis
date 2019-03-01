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
int i,n,x,y,a,c,d,e,b;
scanf("%d",&n);
scanf("%d %d",&a,&b);
c=100*b/a;
for(i=1;i<n;i++){
    scanf("%d %d",&x,&y);
	d=100*y/x;
	e=d-c;
	if(e>=5)
		printf("better\n");
	else if(e<=-5){
		printf("worse\n");
	}
	else{
		printf("same\n");
	}
}

return 0;
}