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
   int a[1001],k,n,j,i,check;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
	scanf("%d",&a[i]);
   check=0;
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
	  {
	      if((a[i]+a[j]==k)&&(a[i]!=a[j]))
		  {
			  check=1;
			  break;}

	  }
    if(check==1)break;
   }
	if(check==0)
	{
	     printf("no\n");

	}
	else
	{printf("yes\n");}
}