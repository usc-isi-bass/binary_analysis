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
   int n;
   scanf("%d\n",&n);
   int a[n][n];
   int i,j;
   int e,b,c,d,s;
   for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);
}
   scanf("\n");
}
      for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(a[i][j]==0){e=i;b=j;}
}
}
         for(i=n-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
           if(a[i][j]==0){c=i;d=j;}
}
}
     s=(c-e+1)*(d-b+1);
     printf("%d",s);
}

