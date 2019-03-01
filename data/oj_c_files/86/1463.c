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
	int i,n,m,x[110],ctr,time;
	scanf("%d",&n);
	while(n--){
		ctr=0;
		time=0;
		scanf("%d",&m);
		for(i=1;i<=m;i++){
			scanf("%d",&x[i]);
			if(time+x[i]-ctr<=60)
			{
				time+=x[i]-ctr+3;
				ctr=x[i];
			}
		}
		if(time<60)
			ctr+=60-time;
		printf("%d\n",ctr);
	}
	return 0;
}