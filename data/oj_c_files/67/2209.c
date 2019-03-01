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
    int x,y,n,z;
	double i,j,a;
	scanf("%d",&n);
		scanf("%d %d",&x,&y);
		i=(1.0*y)/x;
		for(z=2;z<=n;z++){
			scanf("%d %d",&x,&y);
			j=(1.0*y)/x;
			a=j-i;
				if(a>0.05){
					printf("better\n");
				}
				else{
					if(a<-0.05){
						printf("worse\n");
					}
					else{
						printf("same\n");
					}
				}
		}
	return 0;
} 