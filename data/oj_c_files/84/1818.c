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

void selectionSort(int A[],int n)
{
	int i,j,k,t;
	for(i=0;i<n;i++)
    {
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]>A[k])
				k=j;
		}
		if(k!=i)
		{
			t=A[k];
            A[k]=A[i];
			A[i]=t;
		}
	}
}

 int main()
 {
	  int i;
	  int A[100];
	  int n;
      scanf("%d",&n);
	  for(i=0;i<n;i++)
	  {
		  scanf("%d",&A[i]);
	  }
	  selectionSort(A,n);
	  for(i=0;i<2;i++)
	  {
		  printf("%d\n",A[i]);
	  }
      return 0;
 }
 
