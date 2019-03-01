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
 int n,m,i;
 int a[100];
 scanf("%d %d",&n,&m);
  for (i=1;i<=n;i++)
	
  { scanf("%d",&a[i]);}
	int *x;
	x=&a[n];
	for(i=1;i<=n;i++){
	x++;
	*x=a[i];
	}
  printf("%d",a[n-m+1]);
  for(i=n-m+2;i<=2*n-m;i++){
  printf(" %d",a[i]);
  }
	  
	 
	return 0;
}

