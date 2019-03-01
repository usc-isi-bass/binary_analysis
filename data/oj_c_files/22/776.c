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
	int a[300]={0};
  char b[300];
  int max1;
  int max2;
  int i;
  int m=0;
  int n;
  for (i=0;i<300;i++)
  {
	  scanf("%d%c",&a[i],&b[i]);
	  if (b[i]!=',')
		  break;
	  
  }
  n=i;
  for (i=0;i<n-1;i++)
  {
	  if (a[i]!=a[i+1])
		  m=m+1;
  }
  if (m==0)
	  printf("No");
  else

 if (n==0)
	 printf("No");
 else
 {max1=a[0];
 max2=0;
 for(i=0;i<300;i++)
 {
	 if (a[i]>max1)
	 {   max2=max1;
		 max1=a[i];
	 
	 }
	
	 else if (a[i]>max2&&a[i]<max1)
		 max2=a[i];
 }

if (max1==max2)
printf("No");
else 
printf("%d",max2);}
return 0;
}