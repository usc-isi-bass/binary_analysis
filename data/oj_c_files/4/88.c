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



main(){
       int row,col,i,j,*p[100];
       scanf("%d %d",&row,&col);
       for(i=0;i<row;i++){
         p[i]=(int*)malloc(sizeof(int)*col);
         for(j=0;j<col;j++){
           scanf("%d",p[i]+j);
         }
       }
       for(i=0;i<row+col;i++){
         for(j=i;j>=0;j--){
           if(i-j>=row||j>=col) continue;
           else printf("%d\n",*(p[i-j]+j));
         }
       }
}
