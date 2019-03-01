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
  int n,a[M][2],i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  for(int j=0;j<2;j++){
        scanf("%d",&(a[i][j]));
	  }
  }
  int k,l,e;
  for(k=1;k<=n;k++){
	  for(l=0;l<(n-k);l++){
		  if(a[l][0]>a[l+1][0]){
            e=a[l][0];
			a[l][0]=a[l+1][0];
			a[l+1][0]=e;
			e=a[l][1];
			a[l][1]=a[l+1][1];
			a[l+1][1]=e;
		  }
	  }
  }
  int qj[2];
  qj[0]=a[0][0];
  qj[1]=a[0][1];
  for(k=1;k<n;k++){
	  if(a[k][0]>qj[1]){
        printf("no");
        break;
	  }
	  else if(a[k][0]==qj[1]){
        qj[1]=a[k][1];
	  }
	  else if(a[k][0]<qj[1]){
		  if(a[k][1]>qj[1]){
            qj[1]=a[k][1];
		  }
	  }
	  if(k==(n-1)&&(a[k][0]<=qj[1])){
        printf("%d %d",qj[0],qj[1]);
	  }
  }
  
return 0;
}