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
{   int n,i,k,a,time,all,ans,alltime;
    scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		alltime=60; ans=0; time=0;
		for(k=1;k<=a;k++){
			scanf("%d",&all);
            if(all+k*3<=60){ time=all+k*3;
			    ans=all;
			}
			if(all+k*3==61) alltime=alltime-2;
             if(all+k*3==62) alltime=alltime-1;
		}
		ans=ans+(alltime-time);
		printf("%d\n",ans);
	}
	return 0;
}

