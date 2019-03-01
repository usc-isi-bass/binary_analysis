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
  int n,m;
  
  int i,j;
  
scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d",&m);
  int a=2,b=1;
  double sum=0;
   for(j=m;j>0;j--){
     sum+=1.0*a/b;
	 a=a+b;
	 b=a-b;
   }
   printf("%.3lf\n",sum);
}
 
return 0;

}