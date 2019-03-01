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

 int m=0,k=0,j=0;
void main()
{
	int n;
	int v(int a);
	scanf("%d",&n);
	printf("%d",v(n));
}
  int v(int a)
  {
 
  	if(a!=0)
  	{
  	m=a%10;
  	k=a/10;
  	j=j*10+m;
  	
  	v(k);
  	}
  	
  	return(j);
  }

