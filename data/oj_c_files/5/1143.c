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
   int n,m,i,j=0;
   double g,t;
   char a[501],b[501];
   scanf("%lf",&g);
   scanf("%s",a);
   scanf("\n");
   scanf("%s",b);
   n=strlen(a);
   m=strlen(b);
   if(n!=m){printf("error");}
   else{
       for(i=0;i<n;i++){
           if((a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')&&(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')){
               if(a[i]==b[i]){j++;}
               else{;}
           }
           else{j=-1;printf("error");break;}
       }
       t=1.0*j/n;
       if(t>g){printf("yes");}
       else if(t<=g&&j!=-1){printf("no");}
   }  
return 0;
}