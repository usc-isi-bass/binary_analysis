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
	int n,i,a,b,x,y;
	y=0;
	x=0;
	i=1;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			x=x+1;
			i=i+1;
		}else{
			if(y<x){
				y=x;
				x=0;
				i=i+1;
			}else{
				x=0;
				i=i+1;
			}
		}
	}
		    	if(y<x){
				y=x;
				printf("%d",y);
				}else{
			     printf("%d",y);
				}



 	return 0;
}

