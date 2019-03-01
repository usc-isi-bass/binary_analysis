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
       int n,k,sz[1000],p;
       scanf("%d %d",&n,&k);
       for(int i=0;i<n;i++){
           scanf("%d",&sz[i]);
       }
       for(int y=0;y<n;y++){
           for(int m=1;m<n;m++){
           if(m!=y){p=sz[y]+sz[m];}
            if(p==k){break;}
           }
           if(p==k){printf("yes");break;}
           if(y==n-1){printf("no");}
       }
       return 0;
   }
