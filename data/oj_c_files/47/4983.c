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

int main (){
     int i,n[100],k;
     scanf("%d",&k);
     for(i=0;i<=k-1;i++)
     scanf("%d",&n[i]);
     for(i=0;i<=(k-1)/2;i++){
         int e;
        e=n[k-i-1];
       n[k-i-1]=n[i];
         n[i]=e;    
     }
     for(int i=0;i<=k-2;i++){
         printf("%d ",n[i]);
     }
      printf("%d",n[k-1]);
return 0;
}
