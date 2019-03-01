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

void bubblesort(int A[],int n)
{
    int i,j,t;
	for(i=0;i<n;i++)
	{
	   for(j=n;j>i;j--)
	   {
	      if(A[j]<A[j-1])
		  {
			  t=A[j];
			  A[j]=A[j-1];
			  A[j-1]=t;
		  }
	   }
	}
}
int  main()
{  
	int n,i; 
	int A[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("\n%d",&A[i]);
	}
	bubblesort(A,n);
	printf("%d\n%d\n", A[n],A[n-1]);
     return 0;
 }