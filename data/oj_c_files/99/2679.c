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
	int n,p[100],a=0,b=0,c=0,d=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<n;i++){
		if(p[i]<=18){
			a++;
		}
		else if(p[i]>=19&&p[i]<=35){
			b++;
		}
		else if(p[i]>=36&&p[i]<=60){
			c++;
		}
		else{
			d++;
		}
	}
	printf("1-18: %.2lf%%\n",(double)a/n*100);
    printf("19-35: %.2lf%%\n",(double)b/n*100);
    printf("36-60: %.2lf%%\n",(double)c/n*100);
    printf("60??: %.2lf%%\n",(double)d/n*100);
	return 0;
}