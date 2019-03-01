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
  int a[301],j,n,i,k,b,*p;
  scanf("%d %d",&n,&k);
  printf("%d",k);
  a[0]=k;
  p=a;
  b=1;
  for(i=1;i<n;i++)
  {	 scanf("%d",&k); 
	 for(j=0;j<b;j++)
     if(*(p+j)==k) break;
    if(j==b) 
	{
		printf(",%d",k);
        *(p+b)=k;
		b++;
	}


}
}