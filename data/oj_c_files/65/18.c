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
 int n,i;
 scanf("%d",&n);
 int a[200],b[200];
 int h=0,k=0;
 for(i=0;i<n;i++){
   scanf("%d%d",&a[i],&b[i]);
   if(a[i]==0&&b[i]==1) h++;
   if(a[i]==0&&b[i]==2) k++;
   if(a[i]==1&&b[i]==2) h++;
   if(a[i]==1&&b[i]==0) k++;
   if(a[i]==2&&b[i]==0) h++;
   if(a[i]==2&&b[i]==1) k++;

 }

   if(h>k) printf("A\n");
   if(h<k) printf("B\n");
   if(h==k) printf("Tie\n");


return 0;
}
