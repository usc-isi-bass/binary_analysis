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
	int n,y;
	double i=1,a,b,c,d;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&y);
		if(y<=18){
			a+=1;
		}else if(y>18&&y<=35){
			b+=1;
		}else if(y>35&&y<=60){
			c+=1;
		}else if(y>60){
			d+=1;
		}
		i++;
	}
		printf("1-18: %.2lf%%\n",100*a/n);
		printf("19-35: %.2lf%%\n",100*b/n);
		printf("36-60: %.2lf%%\n",100*c/n);
		printf("60??: %.2lf%%\n",100*d/n);
	return 0;
}