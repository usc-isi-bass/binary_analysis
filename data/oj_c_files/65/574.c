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
	int n,i,A=0,B=0,a,b;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
	scanf("%d%d",&a,&b);
	if(a==0&&b==1){
		A++;}
	else if (a==1&&b==0){
	  B++;
	}
	else if (a==1&&b==2){
	A++;
	}
	else if (a==2&&b==1){
	B++;
	}
	else if (a==0&&b==2){
	B++;
	}
	else if (a==2&&b==0){
			A++;
	}

	}

if (A>B)
printf("A");
else if (A<B)
printf("B");
else 
printf("Tie");
 return 0; 
}
