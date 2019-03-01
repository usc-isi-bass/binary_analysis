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
	int n;
	scanf("%d",&n);
	for(int i=10;i<10*10*10*10*10*10;i*=10){
       int a;
	   a=n%i/(i/10);
	   if (a!=0){
		   printf("%d",a);
	   }else{
		   return 0;
	
		}
	}


	
	return 0;
}