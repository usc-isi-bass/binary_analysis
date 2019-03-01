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

int main ()  {
	int result=0,p=0;
	int num,n;
	int i=1;
       scanf("%d", &n);
	while(i<=n&&n<=100){
		scanf("%d", &num);
	      if(i == 1){
			 result = num;			
		} 
		  else{    
		      if(num > result){
			     p=result;
				  result = num; }
			  else if(num<result&&num>p){
				  p=num;}
	      }
		   i++;
	}
	printf("%d\n%d", result,p);
	return 0;
}