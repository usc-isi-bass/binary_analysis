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
	int n,i,age,a=0,b=0,c=0,d=0;
	scanf("%d",&n);
    for(i=1;i<=n;i++){
		scanf("%d",&age);
		if(age<=18){
         a++;
		}
		else if(age>=19&&age<=35){
			b++;
		}
		else if(age>=36&&age<=60){
			c++;
		}
		else{
			d++;
		}
	}
	printf("1-18: %.2lf%%\n",1.0*100*a/n);
	printf("19-35: %.2lf%%\n", 1.0*100*b/n);
	printf("36-60: %.2lf%%\n", 1.0*100*c/n);
	printf("60??: %.2lf%%\n", 1.0*100*d/n);
	return 0;
}