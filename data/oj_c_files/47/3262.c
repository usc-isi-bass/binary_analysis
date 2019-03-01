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
     int n,t,m;
     scanf("%d\n",&n);
     int sz[n];
     for(int i=1;i<=n;i++){
         scanf("%d",&(sz[i]));
     }
     for(int i=n;i>1;i--){
         printf("%d ",sz[i]);
     }
     printf("%d",sz[1]);
     return 0;
 }