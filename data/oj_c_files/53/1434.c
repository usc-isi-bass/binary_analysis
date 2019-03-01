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
    int sz[400];
    int sub[400];
    int n,count=0,bar=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            scanf("%d",&sz[i]);
    }
    for(int j=0;j<n;j++){
            for(int a=0;a<count;a++){
                    if(sz[j]==sub[a]){
                             bar=1;
                    }
            }
            if(bar==0){
                       if(j==0){
                                printf("%d",sz[j]);
                                sub[count]=sz[j];
                                count++;
                       }
                       else{
                                printf(",%d",sz[j]);
                                sub[count]=sz[j];
                                count++;
                       }
            }
            bar=0;
    }
	return 0;
}
