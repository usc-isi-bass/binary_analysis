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
    int shuzu[5][5];
	int i,k;
	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			scanf("%d",&shuzu[i][k]);
		}
	}
    int a,n,m;
	scanf("%d %d",&n,&m);
	if(n<5&&m<5){
        a=1;
	}else{
		a=0;
	}
	if(a==0){
		printf("error");
	}
	if(a==1){
		int shu[5];
		for(i=0;i<5;i++){
			shu[i]=shuzu[n][i];
			shuzu[n][i]=shuzu[m][i];
			shuzu[m][i]=shu[i];
		}
	    for(i=0;i<5;i++){
		    for(k=0;k<4;k++){
			    printf("%d ",shuzu[i][k]);
			}
	     	if(k==4){
			    printf("%d\n",shuzu[i][4]);
			}
		}
	}
	return 0;
}