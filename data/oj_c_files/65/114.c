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
int n;
scanf("%d",&n);
int a[200],b[200];
for(int i=0;i<n;i++){
 scanf("%d%d",&a[i],&b[i]);
}
int sa=0,sb=0;
for(int k=0;k<n;k++){
	if((a[k]==0&&b[k]==1)||(a[k]==1&&b[k]==2)||(a[k]==2&&b[k]==0)){
	 sa++;
	}else if((a[k]==1&&b[k]==0)||(a[k]==2&&b[k]==1)||(a[k]==0&&b[k]==2)){sb++;}
}
if(sa>sb){
 printf("A");
}else if(sa<sb){
  printf("B");
}else{printf("Tie");}
return 0;
}