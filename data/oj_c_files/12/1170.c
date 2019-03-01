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
	int n=0,sz[100],erbei[100],*p1,*p2,sum=0;
	p1=sz;
	p2=erbei;
	for(p1=sz;;p1++){
		scanf("%d",p1);
		n++;
		if(*p1==0){
			for(p1=sz;p1<sz+n-1;p1++){
				*p2=*p1*2;
				p2++;
			}
			for(p2=erbei;p2<erbei+n-1;p2++){
				for(p1=sz;p1<sz+n-1;p1++){
					if(*p2==*p1){
						sum++;
					}
				}
			}
			printf("%d\n",sum);
			p1=sz-1;
			p2=erbei;
			sum=0;
			n=0;
		}
		if(*p1==-1){
			break;
		}
	}
	return 0;
}