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
	int i,n;
	scanf("%d\n",&n);
	float A[100][3];
	for(i=0;i<n;i++)
		scanf("%f%f%f\n",&A[i][0],&A[i][1],&A[i][2]);
	for(i=0;i<n;i++)
	{
		if(A[i][1]*A[i][1]-4*A[i][0]*A[i][2]>0)
			printf("x1=%.5f;x2=%.5f\n",(-A[i][1]+sqrt(A[i][1]*A[i][1]-4*A[i][0]*A[i][2]))/(2*A[i][0]),(-A[i][1]-sqrt(A[i][1]*A[i][1]-4*A[i][0]*A[i][2]))/(2*A[i][0]));
		else if(A[i][1]*A[i][1]-4*A[i][0]*A[i][2]==0)
			printf("x1=x2=%.5f\n",(-A[i][1])/(2*A[i][0]));
		else if(A[i][1]*A[i][1]-4*A[i][0]*A[i][2]<0)
		{if((-A[i][1])/(2*A[i][0])==0)
		printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(A[i][1])/(2*A[i][0]),(sqrt(-(A[i][1]*A[i][1]-4*A[i][0]*A[i][2])))/(2*A[i][0]),(A[i][1])/(2*A[i][0]),(sqrt(-(A[i][1]*A[i][1]-4*A[i][0]*A[i][2])))/(2*A[i][0]));
		else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(-A[i][1])/(2*A[i][0]),(sqrt(-(A[i][1]*A[i][1]-4*A[i][0]*A[i][2])))/(2*A[i][0]),(-A[i][1])/(2*A[i][0]),(sqrt(-(A[i][1]*A[i][1]-4*A[i][0]*A[i][2])))/(2*A[i][0]));}
	}
	return 0;
}

