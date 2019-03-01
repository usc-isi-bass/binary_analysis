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
	int n, i, j;
	int A[100], B[100], C[100]; 
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
		for(j=0;j<A[i];j++)
		{
			scanf("%d", &B[j]);
		}
	    for(j=0;j<A[i];j++)
		{
		    if(B[j]+3*(j+1)>63)
			{
				break;
			}
			
            else
				C[i]=60-3*A[i];
		}
           if(B[j-1]+3*j>=60)
			   C[i]=B[j-1];
		   else
			   C[i]=60-3*j;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n", C[i]);
	}
	return 0;
}