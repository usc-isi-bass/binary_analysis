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
    int x[16],i,j,k,a;
    while(1){
        i=j=k=a=0;
    	for(i=0;i<16;i++)x[i]=0;
    for(i=0;scanf("%d",&x[i]);i++){
        
        if(x[i]==-1||x[i]==0)break;
        }
    if(x[0]==-1)break;
        else for(a=0,j=1;j<i;j++){
            for(k=0;k<j;k++){
                if(x[k]==2*x[j]||x[j]==2*x[k])a++;
            }
        }
        printf("%d\n",a);
	}
	return 0;
}