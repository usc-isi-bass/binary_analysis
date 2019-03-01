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
int r,c,a[8][8],i,j,y,t,s,max,min;
scanf("%d,%d",&r,&c);
y=0;
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
  }
}

for(i=0;i<r;i++){max=0;
  for(s=0;s<c;s++){
    if(a[i][s]>a[i][max]){
	  max=s;
	}
  }min=i;
  for(t=0;t<r;t++){
	  
    if(a[t][max]<a[i][max]){min=t;}
	
  }
  if(min==i){y=1;printf("%d+%d",i,max);break;}
 
}
if(y==0){printf("No");}
return 0;
}