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

int result(int x,int y)
{
	int t=0;
	if(x==y)
		t=x;
	else if(x>y)
		t=result(x/2,y);
	else if(x<y)
		t=result(x,y/2);
	return t;
}
void main()
{
	int m=0,n=0;
	scanf("%d%d",&m,&n);
	printf("%d",result(m,n));
  
}