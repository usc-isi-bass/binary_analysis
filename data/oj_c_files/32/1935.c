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
	int n,i,j,La,Lb;
	char A[100],B[100],C[30][100];
	scanf("%d\n",&n);
	for (i=0;i<=n-1;i++)
	{
		gets(A);
		gets(B);
		getchar();
		La=strlen(A);
		Lb=strlen(B);
		for (j=Lb-1;j>=0;j--)
		{
			A[La-Lb+j]=A[La-Lb+j]-B[j];
			if (A[La-Lb+j]<0)
			{
				A[La-Lb+j]+=10;
				A[La-Lb+j-1]-=1;
			}
			A[La-Lb+j]+=48;
		}
		strcpy(C[i],A);
	}
	for (i=0;i<=n-1;i++) puts(C[i]);
}
