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

int main(int argc, char* argv[])
{
	int n,i,j,t,num;
    int br[100];
    int count[100][61]={0};
    scanf("%d",&n);
    for (i=0;i<n;i++){
		scanf("%d",&br[i]);
        for (j=0;j<br[i];j++){
			scanf("%d",&t);
			count[i][t-1]=1;
		}
	}
    for (i=0;i<n;i++){
		j=0;num=0;
		while (j<60){
			j+=1;
            num+=1;
            if(count[i][num-1]==1) {
				j+=3;
				
			};
		}
		printf("%d\n",num);
	}
	return 0;
}

