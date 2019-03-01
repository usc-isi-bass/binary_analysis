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

int main(int argc, char* argv[])
{
	int n;
	double s=2;
	scanf("%d",&n);
	int i;
	if(n==0){
		s=1;
	}
	if(n==1){
		s=2;
	}
	if(n>=2){	
	  for(i=2;i<=n;i++){
		  s=s*2;
	  }
	}
	printf("%.0lf",s);
	return 0;
}
