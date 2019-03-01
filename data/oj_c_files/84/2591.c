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
	int i,a[100],b,c,d;
	scanf("%d",&d);
		for(i=0;i<d;i++){
			scanf("%d",&a[i]);
		}
		b=a[0],c=a[1];
		for(i=1;i<d;i++){
			
			if(a[i]>b){
				c=b;
				b=a[i];
			}
			else{
		if(a[i]>c){
			c=a[i];
			
				}
			}
		}
				
		printf("%d\n%d\n",b,c);
	return 0;
}