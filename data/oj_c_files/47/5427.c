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

    int sz[100];

    int i,e,n,k,dt;

    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d",&(sz[i]));

    }

    for(e=1;e<=n;e++){

        for(k=0;k<n-e;k++){

            dt=sz[k];

            sz[k]=sz[k+1];

            sz[k+1]=dt;

        }

     }

     for(i=0;i<n;i++){

         if(i<n-1){

         printf("%d ",sz[i]);

         }else{

         printf("%d",sz[i]);

         }

      }

     return 0;

}