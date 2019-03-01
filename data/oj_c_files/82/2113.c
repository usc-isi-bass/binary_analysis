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
    int n,i,k=0,j=0,MAX=0;
    int ss[100],sz[100],zc[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&(ss[i]),&(sz[i]));
    }
    for(i=0;i<n;i++){
        if((ss[i]>=90)&&(ss[i]<=140)&&(sz[i]>=60)&&(sz[i]<=90)){
            k++;;
        }else{
            zc[j]=k;
            j++;
            k=0;
        }
    }
    zc[j]=k;
    for(i=0;i<j+1;i++){
        if(MAX<zc[i]){
            MAX=zc[i];
        }
    }
    printf("%d",MAX);
	return 0;
}

