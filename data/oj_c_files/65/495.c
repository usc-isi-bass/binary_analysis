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
   int a[200],b[200],n,i,x=0,y=0,z=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d%d",&a[i],&b[i]);
   if(a[i]==b[i]){
   x++;
   }else {
	   if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
   y++;
	   }else{
	   z++;
	   }
   }
   }
 
   if(y>z){
   printf("A");
   }else if(y<z){
   printf("B");
   }else{
   printf("Tie");
   }
return 0;
}