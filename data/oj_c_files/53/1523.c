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
  int a[32767],i,n;
  for(i=1;i<=32767;i++)
	  a[i]=0;
  scanf("%d\n",&n);
  n--;
  scanf("%d",&i); 
  a[i]=1;
  printf("%d",i);
  while(n>0)
  { 
     scanf("%d",&i);
	 if(a[i]==0)
	 {
        a[i]=1;
		printf(",%d",i);
	 }
     n--;
  }
}