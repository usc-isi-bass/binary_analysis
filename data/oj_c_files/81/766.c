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

int ab(int n,int m);
int main(){
  int i,j,n,m,a[5][5];
  for(i=0;i<5;i++){
	  for(j=0;j<5;j++){
	    scanf("%d",&a[i][j]);
	  }
  }
  scanf("%d%d",&n,&m);
  if(ab(n,m)) {
	  for(j=0;j<5;j++){
	     int tmp;
		 tmp=a[n][j];
		 a[n][j]=a[m][j];
		 a[m][j]=tmp;
	  }
      for(i=0;i<5;i++){
	    for(j=0;j<5;j++){
	      printf("%d",a[i][j]);
		  if(j<4) printf(" ");
		  if(j==4) printf("\n");
		}
	  }
  }
  else printf("error");
  return 0;
}
int ab(int n,int m){
   if(n<5&&m<5) return 1;
   else return 0;
}