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


void main()
{
  int i,j,n;
  int a[300]={0},b[300]={0};
  
  scanf("%d",&n);

  for(i=0;i<n;i++)
	  scanf("%d",&a[i]);

  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
		if(a[i]==a[j]) a[j]=0;	
		
  }

 

  for(i=0,j=0;i<n;i++)
  {
    if(a[i]!=0)  
	{
		b[j]=a[i];
		j++;
	}
	
  }

  for(i=0;i<n;i++)
  {
     if(b[i]!=0) 
	 {
		 printf("%d",b[i]);
	     if(b[i+1]!=0) printf(",");
	 }
	 
 }

  
}