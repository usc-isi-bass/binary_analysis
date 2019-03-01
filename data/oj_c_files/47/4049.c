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
    int sz[100],i;
	for(i=0;i<n;i++)
    {
      scanf("%d",&sz[i]);
	}
    for(i=0;i<n-1;i++)
    {
      int e;
      if(i<n/2)
      {
        e=sz[i];
        sz[i]=sz[n-i-1];
        sz[n-i-1]=e;
	  }
      printf("%d ",sz[i]);
    }
printf("%d",sz[n-1]);    
return 0;
}                                                                                                                                                                                                                                                                                      
    