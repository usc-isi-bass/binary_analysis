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


int ex(int *x,int *y){
    int tmp=0;
    tmp=*x;
    *x=*y;
    *y=tmp;
    }
int main(){
    int n,k;
    int s=0;
    int sz[1000];
    scanf("%d%d",&n,&k);
    for(int a=0;a<n;a++){
            scanf("%d",&(sz[a]));
            }
    for(int b=0;b<n;b++){
            for(int c=b+1;c<n;c++){
                    if((sz[c])+(sz[b])==k){
                                        s++;
                                        }
                    }
            }
    if(s==0){
             printf("no");
             }else{
    printf("yes");}

    return 0;
    }