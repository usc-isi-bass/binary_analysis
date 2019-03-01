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
	int yuan[100];
	int xin[100];
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&yuan[i]);
	for(i=1;i<=n;i++)
	{
       j=n-i+1;
	   xin[j]=yuan[i];
	}
	printf("%d",xin[1]);
	for(j=2;j<=n;j++)
	printf(" %d",xin[j]);
	return 0;
}