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
 int n,b;
 int w=0;
 int q=0;
 int i=1;
 scanf("%d",&n);
 while(i<=n){
	 scanf("%d",&b);
	 if(b>=w){
		 q=w;
		 w=b;
	 }else{
		 if(b<w&&b>=q){
			 w=w;
			 q=b;
		 }
	 }
	 i++;
 }
 printf("%d\n%d\n",w,q);
 return 0;
}