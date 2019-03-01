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
	int th,i,to,s;
	float c,r;
	scanf("%d",&th);
	scanf("%d %d",&to,&s);
	c=1.0*s/to;
	for(i=0;i<th-1;i++){
		scanf("%d %d",&to,&s);
		r=1.0*s/to;
		if(r>c&&r-c>0.05){
			printf("better\n");
		}else if(r<c&&c-r>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
