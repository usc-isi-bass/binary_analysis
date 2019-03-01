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
    int m,n,i,j,t,sum,cas;
    int times[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        cas=0;
        for(j=0;j<m;j++){
             scanf("%d",&times[j]);                 
        }
        for(j=0;j<m;j++){
             sum=times[j]+3*j;
             if(sum>60){
                  t=60-3*j;
                  cas=1;
                  break;           
             }
             else{
                  if(sum+3>60){
                         t=times[j];
                         cas=2;
                         break;             
                  }     
             }                 
        }
        if(cas==0)
        t=60-3*m;
        printf("%d\n",t);                     
    }
    return 0;
}
