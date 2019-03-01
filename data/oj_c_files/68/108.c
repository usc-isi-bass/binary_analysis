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

int yes(int p){
	if(p%2==0) {
		if(p==2) 
			return true;
		else
			return false;
	}
	for (int i=3;i<=sqrt(p);i+=2) {
		if(p%i==0) 
			return false;
	}
	return true;
}
int main(int argc, char* argv[])
{
  int n,i,j;
  scanf("%d",&n);
  for(i=6;i<=n;i=i+2)
  {
  for(j=3;j<=i/2;j=j+2)
	{if(yes(j)&&yes(i-j))
  {printf("%d=%d+%d\n",i,j,i-j);
  break;}
	else continue;
  }
  }
 
	return 0;
}

