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
  double print=0.0;
  
  int m,n;
  int i,k;
  int *arr;

  scanf("%d",&m);

  for(k=0;k<m;k++)
  {
    print=0.0;
    scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*(n+2));
	for(i=0;i<n+2;i++)
	{
	  if(i==0||i==1)
		  arr[i]=1;
	  else
		  arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<n;i++)
	{
	  print+=(double)arr[i+2]/arr[i+1];
	}
     if(k<m-1)
	printf("%.3lf\n",print);
     else
        printf("%.3lf",print);
  }
return 0;
}