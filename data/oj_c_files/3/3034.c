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

int main(){
    int n,k,i,j;
    int t=0;
    scanf("%d%d",&n,&k);
    int sz[1000];
    for(i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(sz[i]+sz[j]==k) 
            {
                if(t==0)
                {
                    t=1;
                }
                else
                {
                    t=1;
                }
            }
        }
    }
    if(t==1){
        printf("yes");
    }else{
        printf("no");
    }
    return 0;
}

