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
  int *arr;
  int n,i,k;
  int a;
   
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a);
	arr=(int*)malloc(sizeof(int)*a);
	for(k=0;k<a;k++)
	{
	  if(k==0||k==1)
         arr[k]=1;
	  else
		  arr[k]=arr[k-1]+arr[k-2];
	}
	 printf("\n%d\n",arr[a-1]);
  }
 
  return 0;
}