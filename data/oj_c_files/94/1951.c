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
    int N,i,a,b;
    scanf("%d\n",&N);
    int sz[N];
    for(i=0;i<N;i++){
       scanf("%d ",&sz[i]);}
    for(i=0;i<N;i++){
        for(a=1;a<N-i;a++){
            if(sz[a-1]>sz[a]){
                 b=sz[a-1];
                 sz[a-1]=sz[a];
                 sz[a]=b;}}}
    printf("%d",sz[0]);
    for(i=1;i<N;i++){
           if(sz[i]%2==1){
               printf(",%d",sz[i]);                 }}
        
    return 0;
}
    