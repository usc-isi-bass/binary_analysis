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
int n,i,m,k; 
int a[100000];
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  scanf("%d",&m);

  for(i=n-1;i>=0;i--)
   {
     if(a[i]==m)
	 {
		 for(k=i;k<n;k++) 
			{
			a[k]=a[k+1];
			
			} 
		n=n-1;
	 }
         
	}
	 
  for(i=0;i<n;i++)
  {
	  if(i<n-1)

           printf("%d ",a[i]);
	else printf("%d",a[i]);
 
    } 

  return 0;
  
}
