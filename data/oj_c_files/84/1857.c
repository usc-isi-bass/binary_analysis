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
	int n;
	int i,j,k;
	int a[100];
	int max,cimax;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	max=0;
	cimax=0;
	for(j=0;j<n;j++)
	{
	   if(a[j]>max)
	   {
	      max=a[j];
	   }
	}
    printf("%d\n",max);
	for(k=0;k<n;k++)
	{
	   if(a[k]>cimax && a[k]!=max)
	   {
	      cimax=a[k];
	   }
	}
	printf("%d\n",cimax);
	return 0;
}