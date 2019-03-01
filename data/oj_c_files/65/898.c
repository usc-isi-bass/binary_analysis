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
     int n;
     int a=0;
     int b=0;
     int ax[250];
     int bx[250];
     scanf("%d",&n);
     for(int i=0;i<n;i++){
            scanf("%d %d",&ax[i], &bx[i]);
    }
    for(int i=0;i<n;i++){
        if((ax[i]==1)&&(bx[i]==0)){b=b+1;}
         if((ax[i]==0)&&(bx[i]==1)){a=a+1;}
          if((ax[i]==2)&&(bx[i]==0)){a=a+1;}
          if((ax[i]==1)&&(bx[i]==2)){a=a+1;}
          if((ax[i]==2)&&(bx[i]==1)){b=b+1;}
           if((ax[i]==0)&&(bx[i]==2)){b=b+1;}
            if(ax[i]==bx[i]){a=a;b=b;}
    }
    if(a>b){printf("A");}
      if(a<b){printf("B");}
        if(a==b){printf("Tie");}
     return 0;
}
