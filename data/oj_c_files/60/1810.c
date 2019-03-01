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

main()
{
	int a,i,j,k,n,b=0;
	scanf("%d",&n);
	for(i=2;i<=n-2;i++)
	{
		a=1;
		for(j=2;j<=i/2;j++)
		    if(i%j==0) {a=0;break;}
		if(a)
		  for(k=2;k<=(i+2)/2;k++)
			if((i+2)%k==0)  {a=0;break;}
		if(a==1) {printf("%d %d\n",i,i+2);b++;}
    }
	if(b==0)
	  printf("empty");
} 