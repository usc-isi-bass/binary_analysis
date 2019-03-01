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

int main( )
{
  
   int n,k,s=0;
  scanf("%d",&n);
 scanf("%d",&k);

  int sz[1000];
  for(int i=0;i<n;i++){
   scanf("%d",&sz[i]);
  }
   for(int z=0;z<n;z++){
   for(int m=z+1;m<n;m++){
    if(k==sz[z]+sz[m]){
      s++;
    }
 if(k!=(sz[z]+sz[m])){
      s+=0;
    }
  }}
  if(s==0){
   printf("no");
  }
if(s!=0){
   printf("yes");
  }
 return 0;
}
 
