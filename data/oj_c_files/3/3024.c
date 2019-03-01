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
   int n,k;
   int y=0;
   int s[1000],z[1000000];
   scanf("%d%d",&n,&k);
   int i,u,j,v;
   for(i=0;i<n;i++){
   scanf("%d",&s[i]);
   }
   for(u=0;u<n;u++){
     for(j=u+1;j<n;j++){
       z[y]=s[u]+s[j];
       y++;
       }
     }
   int a=0;
   for(v=0;v<y;v++){
     if(z[v]==k){
      a=1;
      break;
     }
   }
   if(a==1){printf("yes");}
   else{printf("no");}
   return 0;
}