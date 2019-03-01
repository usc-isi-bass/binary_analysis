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
int a,j,i,m=0,n=0;
scanf("%d",&a);
int x[a][2],c=0;
for(i=0;i<a;i++){
      for(j=0;j<2;j++){
      scanf("%d",&x[i][j]);
      }
      if(x[i][0]>=90&&x[i][0]<=140&&x[i][1]>=60&&x[i][1]<=90){
         m++;
         if(m>c&&i==a-1){
                         c=m;
                         break;
                         }
      }else{
               if(c<m){
                 c=m;
               }  
             m=0;
           }
}
printf("%d",c);
return 0;
}

