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
	int sum[21];
	int n,cishu,standred;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&cishu);
	
	    sum[cishu]=60;
	    for(int k=0;k<cishu;k++){
		    scanf("%d",&sum[k]);
	    }
	    for(int t=0;t<cishu+1;t++){
		    standred=60-sum[t]-3*t;
		    if(standred<0){
			    printf("%d\n",60-3*t);
			    break;
		    }else if(standred>-1 && standred<4 ){
		    	printf("%d\n",sum[t]);
		        break;
		    }
	
		}
	}
	return 0;
}
