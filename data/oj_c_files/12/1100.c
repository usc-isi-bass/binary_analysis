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
{	int shuzu[16];
	int  i,t,k,num=0;

	for(i=0;;i++){
		scanf("%d",&shuzu[i]);
		if(shuzu[i]==-1){
			break;
		}
		if(shuzu[i]==0){
		
			for(t=0;t<i;t++){
				for(k=t+1;k<i;k++){
					if(shuzu[t]==shuzu[k]*2||shuzu[t]*2==shuzu[k]){
						num++;
					}

				}
			}
			printf("%d\n",num);
			num=0;
			i=-1;
		}
	
	
	}

	return 0;
}
