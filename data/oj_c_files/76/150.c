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
  int n,i,q,z,j,min,max,k=0;
  scanf("%d",&n);
  int s[10005]={0};
  for(i=0;i<n;i++){
     scanf("%d%d",&q,&z);
	 for(j=0;j<10005;j++){
		 if(j>=q&&j<z){
		 s[j]=1;
		 }
	 }
  }
  for(i=0;i<10005;i++){
	  if(s[i]==1){
	  min=i;
	  break;
	  } 
  }
  for(i=0;i<10005;i++){
	  if(s[i]==1){
	  max=i;
	  }
  }
  for(i=min;i<=max;i++){
	  k+=s[i];
  }
  if(k!=(max-min+1)){
    printf("no");
  }else{
  printf("%d %d",min,max+1);
  }
  
  return 0;
}