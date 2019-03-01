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
  int n,i,sz[100];
  
 scanf("%d",&n);
 
 for(int i=0;i<n;i++){
	scanf("%d",&sz[i]);
	}  

for(int i=n-1;i>0;i--){
	printf("%d ",sz[i]);
	} 
	printf("%d",sz[0]);	

return 0;
}