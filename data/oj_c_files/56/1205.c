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
 int m=0;
 int a=0,s=0,d=0,f=0,g=0;
 scanf("%d",&n);
 if(1<=n&&n<=9){
	 s=0,d=0,f=0,g=0;
	 a=n;
	 m=10000*g+1000*f+100*d+10*s+a;
 }
 if(10<=n&&n<=99){
	 d=f=g=0;
     a=n/10;
     s=n%10;
	 m=10000*g+1000*f+100*d+10*s+a;
 }
 if(100<=n&&n<=999){
     f=g=0;
	 a=n/100;
     s=n%100/10;
     d=n%100%10%10;
	 m=10000*g+1000*f+100*d+10*s+a;
 }
	 if(1000<=n&&n<=9999)
 {
	 g=0;
	 a=n/1000;
     s=n%1000/100;
     d=n%1000%100/10;
	 f=n%1000%100%100%10;
	 m=10000*g+1000*f+100*d+10*s+a;
}
	 if(10000<=n&&n<=99999){
	 a=n/10000;
     s=n%10000/1000;
     d=n%10000%1000/100;
	 f=n%10000%1000%100/10;
	 g=n%10000%1000%100%10;
     m=10000*g+1000*f+100*d+10*s+a;
	 }
	 printf("%d\n",m);
 return 0;
}



