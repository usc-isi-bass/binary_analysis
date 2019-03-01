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
{int n;
scanf("%d",&n);
int s;
if(n==0)
{printf("0");return 0;}
 
while(n!=0)
{
	s=n%10;
	n/=10;
	printf("%d",s);
}
  
  return 0;
}