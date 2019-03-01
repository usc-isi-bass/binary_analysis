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


void main ()
{
	int n,i,j,a[100][50];;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		for(j=1;j<=a[i][0];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{  if(a[i][0]==0)printf("60\n");else{
		for(j=1;j<=a[i][0]&&a[i][j]+j*3-3<=60;j++);
		j--;
		if(60-a[i][j]-j*3<=3)
			printf("%d\n",a[i][j]);
			else 
				printf("%d\n",60-j*3);}
	}
}
