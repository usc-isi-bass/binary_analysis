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
  int n,k,i,j;
  int a[max];
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  i=0;
  while(i<n){
      j=1;
	  while(j<n){
		  if(a[i]==k-a[j]){
		  printf("yes");
		  break;
		  }
		  j++;
	  }
	  if(a[i]==k-a[j]){
	  break;
	  }
	  i++;
  }
  if(i==n){
  printf("no");
  }
  return 0;
}