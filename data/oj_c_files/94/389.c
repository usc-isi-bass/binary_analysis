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
 int N,m;
 int a[500];
 int i,j,k,g;
 scanf("%d",&N);
 for(i=0;i<N;i++){//????????for?????
  scanf("%d",&a[i]);
 }
 for(k=1;k<=N;k++){//???????????
  for(j=0;j<N-k;j++){
   if(a[j+1]<a[j]){
    m=a[j+1];
    a[j+1]=a[j];
    a[j]=m;
   }
  }
 }
 int num=0;
 for(g=0;g<N;g++)
  if(a[g]%2!=0) num++;
i=0;
  for(g=0;g<N;g++)
  {
     if(a[g]%2!=0)
	 {
		 i++;
		 if(i<num)
			 printf("%d,",a[g]);
		 if(i==num)
			 printf("%d",a[g]);
	 }
	 }
  return 0;
}
