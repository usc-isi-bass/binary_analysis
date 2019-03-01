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
	int n;
	int i;
	int a;
	double s=0,d=0,f=0,g=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(0<=a&&a<=18){
			s=s+1;
		}else if(19<=a&&a<=35){
			d=d+1;
		}else if(36<=a&&a<=60){
			f=f+1;
		}else if(60<a){
			g=g+1;
		}
	}
	s=100*s;
	d=100*d;
	f=100*f;
	g=100*g;
		printf("1-18: %0.2lf%%\n",s/n);
        printf("19-35: %0.2lf%%\n",d/n);
        printf("36-60: %0.2lf%%\n",f/n);
        printf("60??: %0.2lf%%\n",g/n);
		return 0;
	}
          