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

long n;
long zhishu(int a)
{ 
	for(int i=2;i<=sqrt(a);i++)
	{    
		if(a%i==0)
        return 0;
	}
return 1;
}
main()
{
 scanf("%d",&n);
 int i,j;
 for(i=6;i<=n;i=i+2)
    for(j=3;j<=(i/2);j=j+2)
      {
      if(zhishu(j)&&zhishu(i-j))
	  {
	  printf("%d=%d+%d\n",i,j,i-j);
	  break;
	  }
	}
return 0;
}