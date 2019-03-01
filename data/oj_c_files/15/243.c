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


int main(int argc, char* argv[])
{
	int n,i=0,j;
	int N,k,p;
	scanf ("%d",&n);
	N=n*n;
	for (k=0;k<N;k++)
	{
		scanf ("%d",&p);
		if (p==0)
			i++;
	}
	j=((i/4)-1)*((i/4)-1);
    printf ("%d\n",j);
}