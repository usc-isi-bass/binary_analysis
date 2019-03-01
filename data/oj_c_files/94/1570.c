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
 int a[500];
 int b[500];
 int n,i,p=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
       scanf("%d",&a[i]);
       if(a[i]%2==1){
         b[i]=a[i];
	   }else{
	     b[i]=0;
	   }
	}
   for(i=0;i<n;i++)
   {
     if(b[i]>p){
      p=b[i];
	 }
   }
  for(r=1;r<=p-2;r+=2)
  {
    for(i=0;i<n;i++){
     if(b[i]==r){
      printf("%d,",b[i]);
	 }
	}
  } 
  printf("%d",p);
 return 0;
}
