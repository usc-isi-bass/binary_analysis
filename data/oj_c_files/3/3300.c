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
    int n,k,i,j;
    int s=0;
    scanf("%d %d",&n,&k);
    int*pi=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d ",pi+i);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(*(pi+i)+*(pi+j)==k){
               s=s+1;
            }
        }
    }
    if(s==0){
        printf("no");
    }
    else{
        printf("yes");
    }
    free(pi);
    return 0;
}
