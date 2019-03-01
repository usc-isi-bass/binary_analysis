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

void main()
{
	int a[16],i,j,k,counter;
	for(;;){
		scanf("%d",&a[0]);
		if(a[0]==-1)
			break;
		else{
			counter=0;
			for(i=1;;i++){
				scanf("%d",&a[i]);
				if(a[i]==0)
					break;
			}
			for(j=0;j<i;j++){
				for(k=0;k<i;k++){
					if(a[j]%a[k]==0&&a[j]/a[k]==2)
						counter=counter+1;
				}
			}
			printf("%d\n",counter);
		}
	}
}