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
	int a[16],i,j,m,n,t;
	while(a[0]!=-1){
		t=0;n=0;
		for(i=0;;i++){
			scanf("%d",&a[i]);
			if(a[i]<=0){
				break;
			}
			else{
				t++;
			}
		}
		if(a[0]==-1){
			break;
		}
		else{
		for(j=0;j<t;j++){
			for(m=0;m<t;m++){
				if(a[j]==2*a[m]){
					n++;
					}
				}
			}
			printf("%d\n",n);
		}
	}
	return 0;
}
