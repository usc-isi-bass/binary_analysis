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
	int n,i,stop,j,a[11],t,total;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&stop);
		for(j=0;j<stop;j++){
			scanf("%d",&a[j]);
		
			t=a[j]+3*stop;
		}

			if(t<61){
				total=60-3*stop;
			}
			else if(t<64)
				total=a[j-1];
			else {
				t=a[j-2]+3*(stop-1);
				if(t<61){
					total=60-3*(stop-1);
				}
				else if(t<64){
					total=a[j-2];
				}
				else 
					total=60-3*(stop-2);
			}
			printf("%d\n",total);
			
	}
    return 0;
}

				