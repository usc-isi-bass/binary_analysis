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
     int n,i,j,k=0,x[310],y[310];

	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	     scanf("%d",&x[i]);
	 }

	 y[0]=x[0];
	 k++;
	 for(i=1;i<n;i++)
	 {
	     for(j=0;j<k;j++)
		 {
		     if(x[i]==y[j])
			     break;
		 }
		 if(j==k)
		 {
		     y[k]=x[i];
			 k++;
		 }
	 }
	 printf("%d",y[0]);
	 for(i=1;i<k;i++)
	 {
		 printf(",%d",y[i]);
	     
	 }

	 return 0;
}