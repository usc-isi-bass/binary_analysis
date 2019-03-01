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
	int n,i=0,a=0,d=0;
	struct xy{
		int ssy,szy;
	}xy[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(xy[i].ssy),&(xy[i].szy));
	}
	for(i=0;i<n;i++){
		if((xy[i].ssy>=90)&&(xy[i].ssy<=140)&&(xy[i].szy<=90)&&(xy[i].szy>=60)){
			a=a+1;
		}else{
			a=0;
		}
		if(a>d){
			d=a;
		}
	}
	printf("%d",d);
	return 0;
}
