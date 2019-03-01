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
	int i;
	for(i=1;n!=1;i++){
	  if(n!=1&&n%2==1){
		  int a=n;
		  n=n*3+1;
		  printf("%d*3+1=%d\n", a, n);
	  }else if(n%2==0){
		  int b=n;
		  n=n/2;
		  printf("%d/2=%d\n", b, n);
	  }
	}
	printf("End");
    return 0;
}